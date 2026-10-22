// SPDX-License-Identifier: MIT
/**

Doxygen Awesome Language Toggle
Adapted from Doxygen Awesome Dark Mode Toggle
https://github.com/jothepro/doxygen-awesome-css

*/

class DoxygenAwesomeLanguageToggle extends HTMLElement {
    static init() {
        // Re-use the theme's dark-mode-toggle styles; its script must not be loaded.
        const toggleButton = document.createElement('doxygen-awesome-dark-mode-toggle')
        toggleButton.updateIcon()

        const moveToggle = () => {
            const searchBox = document.getElementById("MSearchBox")
            const toggle = document.querySelector('doxygen-awesome-dark-mode-toggle') || toggleButton
            if (searchBox && searchBox.parentNode !== toggle.parentNode) {
                searchBox.parentNode.appendChild(toggle)
            }
        }

        const containsSearchBox = node => {
            return node.nodeType === Node.ELEMENT_NODE &&
                (node.id === "MSearchBox" || node.querySelector("#MSearchBox") !== null)
        }

        const observer = new MutationObserver(mutations => {
            if (mutations.some(mutation =>
                [...mutation.addedNodes, ...mutation.removedNodes].some(containsSearchBox)
            )) {
                moveToggle()
            }
        })
        observer.observe(document.documentElement, { childList: true, subtree: true })
        moveToggle()
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