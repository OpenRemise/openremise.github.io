// Copyright (C) 2024 Vincent Hamp
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

/// Documentation
///
/// \file   doxygen.hpp
/// \author Vincent Hamp
/// \date   04/08/2024

/// \mainpage Introduction
/// \details \tableofcontents
/// Welcome to the [OpenRemise](https://openremise.at) project, which aims to
/// provide an **open source** solution for operating your entire model railway
/// layout. OpenRemise combines the ease of use of commercial systems with the
/// dedication of a hobbyist project. This means that **no electronics or
/// soldering knowledge** is required to set it up, the whole system is almost
/// plug and play. After initial setup, all further operation is carried out
/// conveniently via a web interface on e.g. your smartphone, tablet or PC.
///
/// \warning
/// Please note that OpenRemise is under **active development**. For a full
/// overview of already available and planned features, see the regularly
/// updated \ref section_introduction_features section.
///
/// \section section_introduction_features Features
/// <div class="tabbed">
/// - <b class="tab-title">Available</b>
///   \image{inline} html open_source_initiative.svg width=16px
///   <b>Open source hard- & software</b><br>
///   Both the hard- and the software are freely available under copyleft
///   licenses. They do not contain any proprietary bits and everyone is free to
///   use or modify it as they see fit.
///   <br><br>
///   \htmlonly &#128268; \endhtmlonly <b>Plug&Play</b><br>
///   The entire system is almost plug and play. Only at the beginning does the
///   firmware have to be flashed onto the board. A [user-friendly tool for
///   Windows and Linux](https://github.com/OpenRemise/Flasher) is available
///   specifically for this purpose. All further ongoing operation is possible
///   via the [Frontend](https://github.com/OpenRemise/Frontend) in all common
///   web browsers. Check out the [demo](https://openremise.at/Frontend/demo/)
///   to try it out.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   <b>DCC</b><br>
///   DCC is the only track protocol supported, but in the most compatible yet
///   still cutting edge way. Changes to the standards are adopted quickly while
///   maintaining backwards compatibility.
///   <br><br>
///   \htmlonly &#9107; \endhtmlonly <b>Adjustable current limits</b><br>
///   4 adjustable current limits (0.5, 1.3, 2.7 and 4.1A) ensure operational
///   safety. The lowest limit is also implicitly applied in service mode.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   <b>Decoder updates</b><br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MS-, MN- and MX
///   decoders can be updated.
///   <br><br>
///   \emoji :musical_note:
///   <b>Sound</b><br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MS-, MN- and MX
///   decoders can be loaded with sound (or general projects).
///   <br><br>
///   \image{inline} html 3rd_party.svg width=16px
///   <b>3rd party
///   support</b><br>
///   The WiFi and USB interfaces allow a variety of 3rd party support. For
///   example, OpenRemise can be used with the following apps
///   <ul>
///   <li>[Z21 App](https://www.z21.eu/en/products/z21-app)</li><br>
///   The well-known Z21 app from [ROCO](https://www.roco.cc/ren) is fully
///   supported. Among other things, it allows you to control locomotives,
///   create layouts and also program CVs.
///   <li>[JMRI](https://www.jmri.org/)</li><br>
///   Probably needs no introduction. Every model railroader's favorite set of
///   tools. Can do everything, maybe not very beginner-friendly.
///   <li>[ZCS](https://www.beathis.ch/zcs/index.html)</li><br>
///   A CV programming tool specifically for ZIMO decoders.
///   <li>[ZIMO
///   ZSP](https://www.zimo.at/web2010/products/zsp_zimo-sound-programmer_EN.htm)</li><br>
///   The ZIMO Sound Programmer, used to create, preview and modify sound
///   projects. It also supports updating decoders or loading sound via USB.
///   <li>[Z2X-Programmer](https://github.com/PeterK78/Z2X-Programmer)</li><br>
///   A relatively new programming tool that is still in its early stages, but
///   already works very well.
///   </ul>
///   <br>
/// - <b class="tab-title">Planned</b>
///   \image{inline} html square_wave.svg width=16px
///   <b>DCC</b><br>
///   DCC support isn't complete yet. First of all, accessory commands are not
///   yet implemented.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   <b>Decoder updates</b><br>
///   [tams elektronik](https://tams-online.de) has already provided information
///   on their decoder update procedure. An implementation in the near future is
///   very likely.
///   <br><br>
///   \image{inline} html network.svg width=16px
///   <b>Bus systems</b><br>
///   Sooner or later, a fully-fledged command station will need to be connected
///   to existing bus systems in order to integrate handheld controllers or
///   section modules. It is currently not clear which buses will be supported,
///   but XPressNet, LocoNet, LCC and BiDiB would be possible. Feedback on this
///   is welcome.
///   <br><br>
///   \emoji :de: <b>German translation of the frontend</b><br>
///   The [Frontend](https://openremise.at/Frontend) is currently only available
///   in English. As a native German speaker, this is a bit embarrassing...
///   <br><br>
/// - <b class="tab-title">Not planned</b>
///   \image{inline} html square_wave.svg width=16px
///   <b>Other track protocols</b><br>
///   Contributions are welcome, but I will certainly not implement a different
///   other track protocol.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   <b>Decoder updates</b><br>
///   [Doehler & Haass](https://doehler-haass.de/cms) deserve an honorable
///   mention here, as although they were keen to help with the implementation,
///   but their update procedure cannot be implemented so easily due to
///   technical limitations of the OpenRemise hardware.
///   <br><br>
///   \image{inline} html sine_wave.svg width=16px
///   <b>Analog operation</b><br>
///   <b>NO.</b>
///   <br><br>
/// </div>
///
/// \section section_introduction_motivation Motivation
/// \todo DCC-EX is great, but bound by hard- (and sw restrictions)
///
/// <div class="section_buttons">
/// | Next                      |
/// | ------------------------: |
/// | \ref page_getting_started |
/// </div>

/// \page page_getting_started Getting Started
/// \details \tableofcontents
/// \todo Where to get the hardware, how to install using the Flasher, YouTube?
///
/// \section section_getting_started_hardware Hardware
/// Blar
///
/// <div class="section_buttons">
/// | Previous   | Next              |
/// | :--------- | ----------------: |
/// | \ref index | \ref page_faq |
/// </div>

/// \page page_faq FAQ
/// \details \tableofcontents
/// \todo Where to get support? I guess GitHub issues mostly, maybe email?
///
/// Wie verbindet man sich mit der Z21 App?
///
/// Wo bekommt ma den Stromstecker her?
///
/// | Current [A] | Nominal size                                       |
/// | ----------- | -------------------------------------------------- |
/// | 0.5         | Service mode                                       |
/// | 1.3         | [Z scale](https://en.wikipedia.org/wiki/Z_scale)   |
/// | 2.7         | [N scale](https://en.wikipedia.org/wiki/N_scale)   |
/// | 4.1         | [H0 scale](https://en.wikipedia.org/wiki/HO_scale) |
///
///
/// <div class="section_buttons">
/// | Previous                  | Next              |
/// | :------------------------ | ----------------: |
/// | \ref page_getting_started | \ref page_history |
/// </div>

/// \page page_history History
/// This project originally started back in 2021 as a decoder update device for
/// my then (and still current) employer. I had already been working in the
/// model railway industry since 2015 and had the feeling that the possibilities
/// of modern electronics and especially their connectivity were not being fully
/// exploited. All decoder update devices that were on the market at that time
/// only had USB.
///
/// So I started working on a Bluetooth decoder update device in my free time,
/// but the "Bluetooth part" didn't last long. One day I stumbled upon a demo of
/// someone serving an HTML page from an
/// [ESP32](https://www.espressif.com/en/products/socs/esp32) over WiFi and I've
/// obsessed over the idea ever since. Conveniently,
/// [Espressif](https://www.espressif.com/) introduced an ESP32 with USB around
/// the same time, and so Bluetooth on an
/// [STMicroelectronics](https://www.st.com/content/st_com/en.html)
/// [STM32](https://www.st.com/en/microcontrollers-microprocessors/stm32-32-bit-arm-cortex-mcus.html)
/// soon became WiFi on an ESP32. At the time, I had not considered how much
/// additional work my decision would entail...
///
/// \todo pictures of MSBlueZ here
///
/// Suddenly I had to deal with HTTP requests and WebSockets, something I had no
/// idea about. In that sense, this turned out to be a very educational side
/// project, as I finally had to deal with web technologies. Fortunately, I was
/// able to avoid [JavaScript](https://www.destroyallsoftware.com/talks/wat)
/// once again by learning [Dart](https://dart.dev) and
/// [Flutter](https://flutter.dev) \image{inline} html flutter_dash.svg "" for
/// writing the [Frontend](https://openremise.at/Frontend), a combination that
/// I've come to appreciate very much.
///
/// \todo pictures of WULF here
///
/// When the project was in a somewhat presentable state, I showed it to my
/// employer, who showed no interest at all. At this point it was clear that I
/// had to open source the project so that all my work would not be in vain. The
/// [DCC-EX](https://dcc-ex.com/) project and it's success gave me the
/// confidence to actually do this, even though the release was still a long way
/// off at the time...
///
/// <div class="section_buttons">
/// | Previous      |
/// | :------------ |
/// | \ref page_faq |
/// </div>