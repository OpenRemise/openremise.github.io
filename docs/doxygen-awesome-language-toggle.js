// SPDX-License-Identifier: MIT
/**

Doxygen Awesome Language Toggle
Adapted from Doxygen Awesome Dark Mode Toggle
https://github.com/jothepro/doxygen-awesome-css

*/

class DoxygenAwesomeLanguageToggle extends HTMLElement {
    static _staticConstructor = function() {
        // No system preference for language, but initialize if needed
    }()

    static init() {
        $(function() {
            $(document).ready(function() {
                // Re-use .css for dark-mode-toggle
                const toggleButton = document.createElement('doxygen-awesome-dark-mode-toggle')
                toggleButton.updateIcon()

                $(document).ready(function(){
                    document.getElementById("MSearchBox").parentNode.appendChild(toggleButton)
                })
                $(window).resize(function(){
                    document.getElementById("MSearchBox").parentNode.appendChild(toggleButton)
                })
            })
        })
    }

    constructor() {
        super();
        this.onclick = this.toggleLanguage
    }

    static get userPreference() {
        const stored = localStorage.getItem('language')
        return stored ? stored : (window.location.pathname.includes('/de/') ? 'de' : 'en')
    }

    static set userPreference(lang) {
        localStorage.setItem('language', lang)
    }

    toggleLanguage() {
        const currentLang = DoxygenAwesomeLanguageToggle.userPreference;
        const newLang = currentLang === 'en' ? 'de' : 'en';

        DoxygenAwesomeLanguageToggle.userPreference = newLang;
        this.updateIcon();

        const { pathname, search, hash } = window.location;

        // Replace existing language segment
        let newPath = pathname.replace(/\/(en|de)\//, `/${newLang}/`);

        // Fallback if neither /en/ nor /de/ exists
        if (newPath === pathname) {
            newPath = `/${newLang}${pathname}`;
        }

        window.location.href = newPath + search + hash;
    }

    updateIcon() {
        const lang = DoxygenAwesomeLanguageToggle.userPreference
        this.innerHTML = lang === 'en' ? '🇬🇧' : '🇩🇪'
    }
}

customElements.define("doxygen-awesome-dark-mode-toggle", DoxygenAwesomeLanguageToggle);