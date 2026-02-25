// Copyright (C) 2025 Vincent Hamp
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

/// \~english
/// \mainpage Introduction
/// \~german
/// \mainpage Einführung
/// \~
/// \details \tableofcontents
///
/// \~english
/// Welcome to the [OpenRemise](https://openremise.at) project, an **open
/// source** [DCC](https://en.wikipedia.org/wiki/Digital_Command_Control)
/// solution for operating your model railway layout. OpenRemise combines the
/// ease of use of commercial systems with the charm of a DIY project. This
/// means that **no electronics or soldering knowledge** is required to set it
/// up, the whole system is almost plug and play. After initial setup, all
/// further operation is carried out conveniently via a [web
/// interface](https://openremise.at/Frontend/demo) on e.g. your smartphone,
/// tablet or PC.
/// \~german
/// Herzlich Willkommen beim [OpenRemise](https://openremise.at) Projekt, einer
/// **Open-Source** [DCC](https://de.wikipedia.org/wiki/Digital_Command_Control)
/// Lösung für den Betrieb einer Modellbahn. OpenRemise kombiniert den
/// Bedienkomfort kommezieller Systeme mit dem Charme eines DIY Projekts. Für
/// die Einrichtung sind **keinerlei Elektronik- oder Lötkenntnisse**
/// erforderlich, das System ist nahezu Plug-and-Play. Nach der
/// Ersteinrichtung erfolgt die gesamte weitere Bedienung bequem über eine
/// [Weboberfläche](https://openremise.at/Frontend/demo), etwa auf einem
/// Smartphone, Tablet oder PC.
/// \~
///
/// \image html s3main_0.1.0.png "\"S3Main\""
///
/// \~english
/// \warning
/// Please note that OpenRemise is under **active development**. For a full
/// overview of already available and planned features, see the regularly
/// updated \ref section_introduction_features section.
/// \~german
/// \warning
/// OpenRemise befindet sich in **aktiver Entwicklung**. Eine vollständige
/// Übersicht der bereits verfügbaren und geplanten Funktionen findet sich im
/// regelmäßig aktualisierten Abschnitt \ref section_introduction_features.
/// \~
///
/// \~english
/// \section section_introduction_features Features
/// <div class="tabbed">
/// - <b class="tab-title">Available</b>
///   \image{inline} html open_source_initiative.svg width=16px
///   **Open source hard- & software**<br>
///   Both the hard- and the software are freely available under copyleft
///   licenses. They do not contain any proprietary bits and everyone is free to
///   use or modify it as they see fit.
///   <br><br>
///   \htmlonly&#128268;\endhtmlonly
///   **Plug&Play**<br>
///   The entire system is almost plug and play. Only at the beginning does the
///   firmware have to be flashed onto the board **once**. A [user-friendly tool
///   for Windows and Linux](https://github.com/OpenRemise/Flasher) is available
///   specifically for this purpose. All further ongoing operation is possible
///   via the [Frontend](https://github.com/OpenRemise/Frontend) in all common
///   web browsers. A [demo](https://openremise.at/Frontend/demo) is available
///   and can be tried out even without hardware.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   DCC is the only track protocol supported, but in the most compatible yet
///   still cutting edge way. Changes to the standards are adopted quickly while
///   maintaining backwards compatibility.
///   <br><br>
///   \image{inline} html Z21.png width=16px
///   **Z21**<br>
///   The [Z21
///   protocol](https://www.z21.eu/media/Kwc_Basic_DownloadTag_Component/root-en-main_47-1652-959-downloadTag-download/default/d559b9cf/1699290380/z21-lan-protokoll-en.pdf)
///   became a kind of lingua franca for model railways thanks to its open
///   documentation. For this reason, it is also fully supported by OpenRemise.
///   <br><br>
///   \htmlonly&#9107;\endhtmlonly
///   **Adjustable current limits**<br>
///   4 adjustable current limits (0.5, 1.3, 2.7 and 4.1A) ensure operational
///   safety.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder updates**<br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MS/N, FS/N and MX
///   decoders can be updated.
///   <br><br>
///   \emoji :musical_note:
///   **Sound**<br>
///   All [ZIMO](https://www.zimo.at/web2010/index.html) MS/N, FS/N and MX
///   decoders can be loaded with sound (or general projects).
///   <br><br>
///   \image{inline} html 3rd_party.svg width=16px
///   **3rd party support**<br>
///   The WiFi and USB interfaces allow a variety of 3rd party support. Here is
///   a certainly not complete list of software that can be used with
///   OpenRemise.
///
///   **Decoder configuration**
///   <ul>
///   <li>[JMRI
///   DecoderPro](https://www.jmri.org/help/en/html/apps/DecoderPro/index.shtml)</li><br>
///   Probably needs no introduction. Can do everything, maybe not very
///   beginner-friendly.
///   <li>[ZCS](https://www.beathis.ch/zcs/index.html)</li><br>
///   A CV programming tool specifically for ZIMO decoders.
///   <li>[Z2X-Programmer](https://github.com/PeterK78/Z2X-Programmer)</li><br>
///   A relatively new programming tool that is still in its early stages, but
///   already works very well.
///   </ul>
///
///   <br>
///   **Layout control**
///   <ul>
///   <li>[Rocrail](https://wiki.rocrail.net)</li><br>
///   Free and cross-platform.
///   <li>[iTrain](https://www.berros.eu)</li><br>
///   Cross-platform software, reasonable priced.
///   </ul>
///
///   <br>
///   **Mobile**
///   <ul>
///   <li>[Z21 App](https://www.z21.eu/en/products/z21-app)</li><br>
///   The well-known Z21 app from [ROCO](https://www.roco.cc/ren) is fully
///   supported. Among other things, it allows you to control locomotives,
///   create layouts and also program CVs. Unfortunately, the app has recently
///   become chargeable for third-party devices at 19,99€.
///   <li>[RailBOX: Railroad
///   Control](https://play.google.com/store/apps/details?id=com.railbox.railroadcontrol&hl=en)</li><br>
///   Limited free edition, premium upgrade at 4,39€.
///   <li>[DigiTrainsPRO](https://digitrainspro.hu)</li><br>
///   Limited free edition, premium subscription model only.
///   </ul>
/// - <b class="tab-title">Planned</b>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   DCC support isn't complete yet. Extended accessory decoders or the new
///   [RCN-218](https://normen.railcommunity.de/RCN-218.pdf) automated logon
///   ("DCC-A") are not currently supported.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder updates**<br>
///   [Doehler & Haass](https://doehler-haass.de), [tams
///   elektronik](https://tams-online.de) and or
///   [train-o-matic](https://train-o-matic.com)...? Let's see what the future
///   brings.
///   <br><br>
///   \image{inline} html susi.svg width=16px
///   **SUSI**<br>
///   The hardware has a standard SUSI bus interface. It would be conceivable to
///   allow SUSI modules to be configured or tested directly.
///   <br><br>
///   \image{inline} html network.svg width=16px
///   **Bus systems**<br>
///   Sooner or later, a fully-fledged command station will need to be connected
///   to existing bus systems in order to integrate handheld controllers or
///   section modules. It is currently not clear which buses will be supported,
///   but LocoNet, BiDiB and LCC would be possible. Feedback on this is welcome.
///   <br><br>
///   \image{inline} html ip.svg width=16px
///   **IPv6 support**<br>
///   Currently only IPv4 is supported, but IPv6 would be possible.
///   <br><br>
///   \emoji :de:
///   **German translation of the frontend**<br>
///   The [Frontend](https://openremise.at/Frontend) is currently only available
///   in English. As a native German speaker, this is a bit embarrassing...
///   <br><br>
/// - <b class="tab-title">Not planned</b>
///   \image{inline} html wifi.svg width=16px
///   **Access point operation**<br>
///   OpenRemise is designed to be integrated into an existing network. Access
///   point operation is not planned for the time being, contributions from the
///   community would be welcome.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **Other track protocols**<br>
///   I don’t plan to work on it, contributions from the community would be
///   welcome.
///   <br><br>
///   \image{inline} html sine_wave.svg width=16px
///   **Analog operation**<br>
///   Over my dead body.
///   <br><br>
/// </div>
/// \~german
/// \section section_introduction_features Funktionen
/// <div class="tabbed">
/// - <b class="tab-title">Verfügbar</b>
///   \image{inline} html open_source_initiative.svg width=16px
///   **Open-Source Hard- & Software**<br>
///   Sowohl die Hard- als auch die Software sind unter Copyleft-Lizenzen frei
///   verfügbar. Sie enthalten keine proprietären Bestandteile und können von
///   jedem nach Belieben verwendet oder verändert werden.
///   <br><br>
///   \htmlonly&#128268;\endhtmlonly
///   **Plug&Play**<br>
///   Das gesamte System ist nahezu Plug-and-Play. Lediglich zu Beginn muss die
///   Firmware **einmalig** auf die Platine geladen werden. Hierfür steht ein
///   [benutzerfreundliches Tool für Windows und
///   Linux](https://github.com/OpenRemise/Flasher) zur Verfügung. Die weitere
///   Bedienung erfolgt über das
///   [Frontend](https://github.com/OpenRemise/Frontend) in allen gängigen
///   Webbrowsern. Eine [Demo](https://openremise.at/Frontend/demo) kann auch
///   ohne Hardware ausprobiert werden.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   DCC ist das einzige unterstützte Gleisprotokoll, dafür allerdings auf die
///   kompatibelste und gleichzeitig modernste Weise. Änderungen an den
///   Standards werden schnell umgesetzt, die Abwärtskompatibilität erhalten
///   bleibt.
///   <br><br>
///   \image{inline} html Z21.png width=16px
///   **Z21**<br>
///   Das [Z21
///   Protokoll](https://www.z21.eu/media/Kwc_Basic_DownloadTag_Component/47-1652-959-downloadTag/default/69bad87e/1699290251/z21-lan-protokoll.pdf)
///   hat sich dank seiner offenen Dokumentation zu einer Art Lingua franca für
///   Modelleisenbahnen entwickelt. Aus diesem Grund wird es auch von OpenRemise
///   vollständig unterstützt.
///   <br><br>
///   \htmlonly&#9107;\endhtmlonly
///   **Einstellbare Strombegrenzung**<br>
///   Eine in 4 Stufen einstellbare Strombegrenzung (0.5, 1.3, 2.7 und 4.1A)
///   gewährleistet Betriebssicherheit.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder Updates**<br>
///   Alle [ZIMO](https://www.zimo.at/web2010/index.html) MS/N, FS/N and MX
///   können geupdated werden.
///   <br><br>
///   \emoji :musical_note:
///   **Sound**<br>
///   Alle [ZIMO](https://www.zimo.at/web2010/index.html) MS/N, FS/N und
///   MX-Decoder können mit Sound (oder allgemeinen Projekten) beladen werden.
///   <br><br>
///   \image{inline} html 3rd_party.svg width=16px
///   **Unterstützung durch Drittanbieter**<br>
///   Die WLAN und USB Schnittstellen ermöglichen die Integration verschiedener
///   Drittanbieter-Software. Hier findet sich eine sicherlich nicht
///   vollständige Liste von Applikationen, die mit OpenRemise kompatibel ist.
///
///   **Decoder Konfiguration**
///   <ul>
///   <li>[JMRI
///   DecoderPro](https://www.jmri.org/help/en/html/apps/DecoderPro/index.shtml)</li><br>
///   Braucht vermutlich keine Vorstellung. Kann alles, vielleicht nicht immer
///   sehr nutzerfreundlich.
///   <li>[ZCS](https://www.beathis.ch/zcs/index.html)</li><br>
///   Ein CV Programmier-Tool speziell für ZIMO Decoder.
///   <li>[Z2X-Programmer](https://github.com/PeterK78/Z2X-Programmer)</li><br>
///   Ein relativ neues Programmierwerkzeug, das sich noch in der
///   Entwicklungsphase befindet, aber bereits sehr gut funktioniert.
///   </ul>
///
///   <br>
///   **Anlagensteuerung**
///   <ul>
///   <li>[Rocrail](https://wiki.rocrail.net)</li><br>
///   Kostenlos und plattformübergreifend.
///   <li>[iTrain](https://www.berros.eu)</li><br>
///   Plattformübergreifende Software, vernünftiger Preis.
///   </ul>
///
///   <br>
///   **Mobil**
///   <ul>
///   <li>[Z21 App](https://www.z21.eu/de/produkte/z21-app)</li><br>
///   Die bekannte Z21 App von [ROCO](https://www.roco.cc/rde) wird vollständig
///   unterstützt. Sie ermöglicht unter anderem die Steuerung von Lokomotiven,
///   die Erstellung von Gleisplänen und die Programmierung von CVs. Leider ist
///   die App seit Kurzem für Geräte von Drittanbietern kostenpflichtig und wird
///   für 19,99 € angeboten.
///   <li>[RailBOX: Railroad
///   Control](https://play.google.com/store/apps/details?id=com.railbox.railroadcontrol&hl=en)</li><br>
///   Limitierte Gratisversion, Premium-Upgrade für 4,39€.
///   <li>[DigiTrainsPRO](https://digitrainspro.hu)</li><br>
///   Limitierte Gratisversion, Premium nur im Abonnementmodell erhältlich.
///   </ul>
/// - <b class="tab-title">Geplant</b>
///   \image{inline} html square_wave.svg width=16px
///   **DCC**<br>
///   Die DCC-Unterstützung ist noch nicht vollständig. Erweiterte
///   Zubehördecoder oder die neue automatische Anmeldung gemäß
///   [RCN-218](https://normen.railcommunity.de/RCN-218.pdf) ("DCC-A") werden
///   derzeit noch nicht unterstützt.
///   <br><br>
///   \image{inline} html system_update_alt.svg width=16px
///   **Decoder Updates**<br>
///   [Doehler & Haass](https://doehler-haass.de), [tams
///   elektronik](https://tams-online.de) und oder
///   [train-o-matic](https://train-o-matic.com)...? Mal schauen was die Zukunft
///   bringt.
///   <br><br>
///   \image{inline} html susi.svg width=16px
///   **SUSI**<br>
///   Die Hardware besitzt ein Standard SUSI Bus Interface. Dies würde es
///   erlauben SUSI Module direkt zu konfigurieren und zu testen.
///   <br><br>
///   \image{inline} html network.svg width=16px
///   **Bussysteme**<br>
///   Früher oder später benötigt eine vollwertige Zentrale eine Anbindung an
///   bestehende Bussysteme um beispielsweise Handregler oder Belegtmelder
///   einbinden zu können. Es ist derzeit noch unklar, welche Busse unterstützt
///   werden, aber LocoNet, BiDiB und LCC wären möglich. Rückmeldungen
///   diesbezüglich sind willkommen.
///   <br><br>
///   \image{inline} html ip.svg width=16px
///   **IPv6 Unterstützung**<br>
///   Aktuell wird nur IPv4 unterstützt, IPv6 sollte aber möglich sein.
///   <br><br>
///   \emoji :de:
///   **Deutsche Übersetzung des Frontend**<br>
///   Das [Frontend](https://openremise.at/Frontend) ist aktuell ausschließlich
///   in Englisch verfügbar. Etwas peinlich als deutscher Muttersprachler...
///   <br><br>
/// - <b class="tab-title">Nicht geplant</b>
///   \image{inline} html wifi.svg width=16px
///   **Access Point Betrieb**<br>
///   OpenRemise ist für die Integration in ein bestehendes Netzwerk konzipiert.
///   Der Betrieb als Access Point ist vorerst nicht geplant, Beiträge aus der
///   Community wären willkommen.
///   <br><br>
///   \image{inline} html square_wave.svg width=16px
///   **Andere Gleisprotokolle**<br>
///   Ich selbst plane nicht daran zu arbeiten, Beiträge aus der Community wären
///   willkommen.
///   <br><br>
///   \image{inline} html sine_wave.svg width=16px
///   **Analoger Betrieb**<br>
///   Über meine Leiche.
///   <br><br>
/// </div>
/// \~
///
/// \section section_introduction_motivation Motivation
/// \~english
/// \todo
/// Compare OpenRemise to other open source projects like DCC-EX or Z21PG.
/// \~german
/// \todo
/// OpenRemise mit anderen Open-Source Projekten wie DCC-EX oder Z21PG
/// vergleichen.
/// \~
///
/// <div class="section_buttons">
/// | Next                      |
/// | ------------------------: |
/// | \ref page_getting_started |
/// </div>

/// \~english
/// \page page_getting_started Getting Started
/// \~german
/// \page page_getting_started Erste Schritte
/// \~
/// \details \tableofcontents
///
/// \~english
/// \section section_getting_started_buy_a_board Buy a Board
/// Not everyone is able to have printed circuit boards manufactured by a PCB
/// prototype service. For this reason, a small contingent of boards is
/// available at the [PCBWay
/// Bazaar](https://www.pcbway.com/project/gifts_list.html?itemsboxid=15&sortid=1&stock=0),
/// a marketplace service specifically for hobbyists and DIY enthusiasts.
/// \~german
/// \section section_getting_started_buy_a_board Eine Platine kaufen
/// Nicht jeder wird in der Lage sein Leiterplatten von einem
/// PCB-Prototypenhersteller fertigen zu lassen. Aus diesem Grund ist ein
/// kleines Kontingent an Platinen im [PCBWay
/// Bazaar](https://www.pcbway.com/project/gifts_list.html?itemsboxid=15&sortid=1&stock=0)
/// erhältlich, einem Marktplatz speziell für Hobbybastler und DIY-Begeisterte.
/// \~
///
/// \~english
/// The following OpenRemise boards can currently be ordered:
/// \~german
/// Folgende OpenRemise-Platinen können aktuell bestellt werden:
/// \~
/// -
/// [S3Main](https://www.pcbway.com/project/gifts_detail/OpenRemise_S3Main_d6e7576a.html)
///
/// \~english
/// Please note that these boards **do not contain any software** when
/// delivered. This also means that the PCBs can only subjected to a visual
/// inspection and not a functional test. However, I also had all of my \ref
/// page_history "prototypes" manufactured at PCBWay and have not had a single
/// soldering error in over a dozen orders.
/// \~german
/// Achtung, die Platinen enthalten **bei Lieferung keine Software**. Daher
/// können die Leiterplatten nur einer Sichtprüfung und keinem Funktionstest
/// unterzogen werden. Bei über einem Dutzend Aufträgen all meiner \ref
/// page_history "Prototypen" unterlief PCBWay allerdings noch kein einziger
/// Lötfehler.
/// \~
///
/// \~english
/// \image html pcbway_bazaar.png "\"S3Main\" on the PCBWay Bazaar" width=640px
/// \~german
/// \image html pcbway_bazaar.png "\"S3Main\" auf dem PCBWay Bazaar" width=640px
/// \~
///
/// \~english
/// \subsection subsection_getting_started_or_manufacture ...or Manufacture One
/// If you don't fancy buying from PCBWay and you know your way around Gerber
/// files, you are welcome to manufacture your own hardware at any other PCB
/// prototype service, e.g.:
/// - [JLCPCB](https://jlcpcb.com)
/// - [Pcbcart](https://www.pcbcart.com)
/// - [Eurocircuits](https://www.eurocircuits.com)
/// - and so forth...
/// \~german
/// \subsection subsection_getting_started_or_manufacture ...oder herstellen
/// Wer nicht bei PCBWay kaufen möchte und mit Gerber-Dateien vertraut ist, der
/// kann seine Hardware natürlich bei einem beliebigen anderen
/// Leiterplatten-Prototypenhersteller fertigen lassen, z.B.:
/// - [JLCPCB](https://jlcpcb.com)
/// - [Pcbcart](https://www.pcbcart.com)
/// - [Eurocircuits](https://www.eurocircuits.com)
/// - usw...
/// \~
///
/// \~english
/// The [KiCad](https://www.kicad.org) projects with all Gerber files can be
/// found on [GitHub](https://github.com/OpenRemise).
/// \~german
/// Die [KiCad](https://www.kicad.org) Projekte mit allen Gerber-Dateien sind
/// auf [GitHub](https://github.com/OpenRemise) zu finden.
/// \~
///
/// \~english
/// \section section_getting_started_install Install the Firmware
/// Flashing the firmware for the **first time** is easier than with many
/// professional products. The only things you need besides the board itself
/// (obviously) are
/// - DC power supply (10-22V)
/// - [USB-C](https://en.wikipedia.org/wiki/USB-C) cable
/// - Windows or Linux computer with a free USB port
/// \~german
/// \section section_getting_started_install Installieren der Firmware
/// Das **erstmalige** Flashen der Firmware ist einfacher als bei vielen
/// professionellen Produkten. Neben der Platine selbst (nona) wird folgendes
/// benötigt:
/// - DC Netzgerät (10-22V)
/// - [USB-C](https://de.wikipedia.org/wiki/USB-C) Kabel
/// - Windows oder Linux PC mit einem freien USB Port
/// \~
///
/// \~english
/// Supply the board with power and plug in the USB-C cable. The **red LED**
/// under the&nbsp; \image{inline} html power.svg width=16px &nbsp;symbol on the
/// board should **light up**.
/// \~german
/// Schließt die Platine ans Netzgerät an und steckt das USB-C Kabel ein. Die
/// **rote LED** unter dem&nbsp; \image{inline} html power.svg width=16px
/// &nbsp;Symbol sollte **aufleuchten**.
/// \~
///
/// \~english
/// \note
/// If the red LED does not light up, please check the polarity of the power
/// supply.
/// \~german
/// \note
/// Falls die rote LED nicht leuchtet, prüft die Polarität des Netzgeräts.
/// \~
///
/// \~english
/// \subsection subsection_getting_started_bl Put the Board into Bootloader
/// In order to make the board receptive to uploads, we need to switch to the
/// so-called **bootloader**. Conveniently, I printed the instructions directly
/// onto the board \emoji :wink:. The two buttons **EN** and **BOOT** must be
/// pressed in the following order:
/// - Hold EN
/// - Hold BOOT
/// - Release EN
/// - Release BOOT
/// \~german
/// \subsection subsection_getting_started_bl Platine in Bootloader versetzen
/// Um die Platine für Uploads empfänglich zu machen, müssen wir in den
/// sogenannten Bootloader wechseln. Praktischerweise habe ich die Anleitung
/// direkt auf die Platine gedruckt \emoji :wink:. Die beiden Tasten **EN** und
/// **BOOT** müssen in folgender Reihenfolge gedrückt werden:
/// - EN gedrückt halten
/// - BOOT gedrückt halten
/// - EN loslassen
/// - BOOT loslassen
/// \~
///
/// \~english
/// Unfortunately, the board doesn't give any feedback as to whether it is
/// actually in boot mode. If it turns out later that it isn't, you can repeat
/// the process at any time without worrying about breaking anything.
/// \~german
/// Leider gibt die Platine keine Rückmeldung darüber, ob sie sich tatsächlich
/// im Bootloader befindet. Sollte sich später herausstellen dass dies nicht
/// der Fall war, so kann der Vorgang jedoch jederzeit wiederholt werden, ohne
/// befürchten zu müssen etwas zu beschädigen.
/// \~
///
/// \~english
/// \note
/// Some Windows users have reported that it only worked for them if they
/// **first put the board into the bootloader** and only then plugged in the
/// USB-C cable.
/// \~german
/// \note
/// Einige Windows Nutzer berichteten, dass es bei ihnen nur funktionierte, wenn
/// sie das Board **zuerst in den Bootloader versetzten** und erst anschließend
/// das USB-C-Kabel anschlossen.
/// \~
///
/// \~english
/// \subsection subsection_getting_started_flasher Upload the Firmware
/// To flash the firmware onto a factory new board there is a small tool
/// called... well, [Flasher](https://github.com/OpenRemise/Flasher). It is
/// available for both Windows and Linux operating systems. Please select your
/// operating system and follow the steps.
/// \~german
/// \subsection subsection_getting_started_flasher Upload der Firmware
/// Um die Firmware auf eine neue Platine zu flashen gibt es ein kleines Tool
/// namens... nun ja, [Flasher](https://github.com/OpenRemise/Flasher). Es ist
/// für Windows und Linux verfügbar. Bitte wählt euer Betriebssystem aus und
/// folgt den Schritten.
/// \~
///
// clang-format off
/// \page page_getting_started
/// \details \tableofcontents
/// \~english
/// <div class="tabbed">
/// - <b class="tab-title">Windows</b>
///   - Download and extract [Flasher-0.1.1-Windows-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Windows-x64.zip)
///   - Run `Flasher.bat`
///   - Click the `Download latest firmware` \image{inline} html network_drive.svg width=24px button
///   - Wait until the display shows `Done`
///   - Click the `Start` \image{inline} html play.svg width=24px button
///   - Wait until the display shows `Done` again
///   - Press the EN button on the board to reboot
/// - <b class="tab-title">Linux</b>
///   - Download and extract [Flasher-0.1.1-Linux-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Linux-x64.zip)
///   - Make `Flasher.sh` executable by running `chmod +x Flasher.sh`
///   - Run `Flasher.sh`
///   - Click the `Download latest firmware` \image{inline} html network_drive.svg width=24px button
///   - Wait until the display shows `Done`
///   - Click the `Start` \image{inline} html play.svg width=24px button
///   - Wait until the display shows `Done` again
///   - Press the EN button on the board to reboot
/// </div>
/// \~german
/// <div class="tabbed">
/// - <b class="tab-title">Windows</b>
///   - Herunterladen und extrahieren von [Flasher-0.1.1-Windows-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Windows-x64.zip)
///   - `Flasher.bat` ausführen
///   - `Download latest firmware` \image{inline} html network_drive.svg width=24px Button klicken
///   - Warten bis das Display `Done` anzeigt
///   - `Start` \image{inline} html play.svg width=24px Button klicken
///   - Erneut warten bis das Display `Done` anzeigt
///   - EN Taster auf der Platine drücken um neu zu starten
/// - <b class="tab-title">Linux</b>
///   - Herunterladen und extrahieren von [Flasher-0.1.1-Linux-x64.zip](https://github.com/OpenRemise/Flasher/releases/download/v0.1.1/Flasher-0.1.1-Linux-x64.zip)
///   - `Flasher.sh` ausführbar machen durch `chmod +x Flasher.sh`
///   - `Flasher.sh` ausführen
///   - `Download latest firmware` \image{inline} html network_drive.svg width=24px Button klicken
///   - Warten bis das Display `Done` anzeigt
///   - Click the `Start` \image{inline} html play.svg width=24px button
///   - Erneut warten bis das Display `Done` anzeigt
///   - EN Taster auf der Platine drücken um neu zu starten
/// </div>
/// \~
// clang-format on
/// \page page_getting_started
/// \details \tableofcontents
///
/// \~english
/// Depending on the baud rate, uploading the firmware may take **a few
/// minutes**. The following (accelerated) clip shows what the upload should
/// look like:
/// \~german
/// Je nach Baudrate kann das Hochladen der Firmware **einige Minuten** dauern.
/// Der folgende (beschleunigte) Clip zeigt wie der Upload aussehen sollte:
/// \~
///
// clang-format off
/// \page page_getting_started
/// \details \tableofcontents
/// \~english
/// \htmlonly
/// <div class="image">
/// <iframe width="360" height="480" src="../install_the_firmware.webm" title="Flashing the firmware using the \"Flasher\" tool" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <div class="caption">Flashing the firmware using the "Flasher" tool</div>
/// </div>
/// \endhtmlonly
/// \~german
/// \htmlonly
/// <div class="image">
/// <iframe width="360" height="480" src="../install_the_firmware.webm" title=Flashen der Firmware mit dem \"Flasher\" Tool allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <div class="caption">Flashen der Firmware mit dem "Flasher" Tool</div>
/// </div>
/// \endhtmlonly
/// \~
// clang-format on
/// \page page_getting_started
/// \details \tableofcontents
///
/// \~english
/// \note
/// If the device from which the upload is to be performed does not have
/// internet access, it is also possible to open the firmware file from a local
/// storage medium. To do this, use the `Open firmware` \image{inline} html
/// hard_drive.svg width=24px button. The firmware can be downloaded from the
/// following link.<br>
/// https://github.com/OpenRemise/Firmware/releases/latest
/// \~german
/// \note
/// Wenn das Gerät von dem der Upload durchgeführt werden soll keinen
/// Internetzugang hat, kann die Firmware-Datei mit dem `Open firmware`
/// \image{inline} html hard_drive.svg width=24px Button auch von einem lokalen
/// Speichermedium geöffnet werden. Die Firmware kann über den folgenden Link
/// heruntergeladen werden.<br>
/// https://github.com/OpenRemise/Firmware/releases/latest
/// \~
///
/// \~english
/// \warning
/// Once the firmware has been successfully flashed, this process **NEVER**
/// needs to be repeated. All further updates are performed via the frontend.
/// \~german
/// \warning
/// Wurde die Firmware einmal erfolgreich geflasht, so muss dieser Vorgang **NIE
/// WIEDER** wiederholt werden. Alle weiteren Updates erfolgen über das
/// Frontend.
/// \~
///
/// \~english
/// \section section_getting_started_wifi Connect to WiFi
/// Congratulations, you have successfully installed the OpenRemise firmware on
/// a board. Some features, such as USB, already work, but the board is still
/// running in what is known as **access point mode**. This means that the
/// **board initially opens its own WiFi network** and does not connect to one.
/// Therefore, we still need to adjust the WiFi settings to connect to the
/// desired network.
/// \~german
/// \section section_getting_started_wifi Mit WLAN verbinden
/// Herzlichen Glückwunsch! Die OpenRemise Firmware wurde erfolgreich auf der
/// Platine installiert. Einige Funktionen, wie z. B. USB, sind nun bereits
/// verfügbar, allerdings läuft die Firmware noch im sogenannten **Access Point
/// Modus**. Das bedeutet, dass die Platine zunächst ein **eigenes WLAN Netzwerk
/// erstellt** und sich nicht mit einem bestehenden verbindet. Daher müssen wir
/// die WLAN Einstellungen noch anpassen, um eine Verbindung zum gewünschten
/// Netzwerk herzustellen.
/// \~
///
/// \~english
/// To **change the WiFi settings** you have to connect to the board with a
/// WiFi-enabled device. If your PC doesn't have WiFi, you can simply use a
/// smartphone. Any device with a web browser is sufficient.
/// \~german
/// Um die **WLAN Einstellungen zu ändern** muss man sich mit einem WLAN-fähigen
/// Gerät mit der Platine verbinden. Falls der eigene PC kein WLAN besitzt, so
/// kann man auch ein Smartphone oder sonstige Geräte mit Webbrowser verwenden.
/// \~
///
/// \~english
/// The following steps are necessary to change the settings:
/// - Search for new WiFi networks
/// - Connect to `OpenRemise`
/// - Open a web browser and go to `remise.local` (or `192.168.4.1`)
/// - Change the WiFi settings
///   - Optionally change mDNS (restricted to `[^\.]*remise`, so for example
///     `vincents-remise`)
///   - Optionally set a static IP address
/// - Click `Save and restart`
/// \~german
/// Folgende Schritte sind notwendig, um die Einstellungen zu ändern:
/// - Neue WLAN Netzwerke suchen
/// - Mit `OpenRemise` verbinden
/// - Webbrowser öffnen und `remise.local` (oder `192.168.4.1`) aufrufen
/// - WLAN Einstellungen ändern
///   - Optional mDNS ändern (beschränkt auf `[^\.]*remise`, also z.B.
///     `vincents-remise`)
///   - Optional eine statische IP Adresse vergeben
/// - `Save and restart` klicken
/// \~
///
/// \~english
/// The following clip shows me performing these steps on my smartphone:
/// \~german
/// Der folgende Clip zeigt wie ich diese Schritte auf meinem Smartphone
/// ausführe:
/// \~
///
// clang-format off
/// \page page_getting_started
/// \details \tableofcontents
/// \~english
/// \htmlonly
/// <div class="image">
/// <iframe width="286" height="640" src="../captive_portal.webm" title="Changing WiFi settings from a smartphone" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <div class="caption">Changing WiFi settings from a smartphone</div>
/// </div>
/// \endhtmlonly
/// \~german
/// \htmlonly
/// <div class="image">
/// <iframe width="286" height="640" src="../captive_portal.webm" title="Ändern der WLAN-Einstellungen über ein Smartphone" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <div class="caption">Ändern der WLAN-Einstellungen über ein Smartphone</div>
/// </div>
/// \endhtmlonly
/// \~
// clang-format on
/// \page page_getting_started
/// \details \tableofcontents
///
/// \~english
/// \note
/// Clicking on the arrow next to "Networks" opens a list of all the networks
/// found, including signal strength and open/closed status. If the network is
/// password protected, a small \htmlonly&#x1F512;\endhtmlonly symbol will
/// appear next to it.
/// \~german
/// \note
/// Ein Klick auf den Pfeil neben „Netzwerke“ öffnet eine Liste aller gefundenen
/// Netzwerke, inklusive Signalstärke und Status (offen/geschlossen). Ist das
/// Netzwerk passwortgeschützt, erscheint daneben ein kleines
/// \htmlonly&#x1F512;\endhtmlonly Symbol.
/// \~
///
/// \~english
/// \section section_getting_started_frontend Open the Frontend
/// If the board has restarted and the WiFi settings are correct, it should now
/// connect to the network. The **green LED** under the&nbsp; \image{inline}
/// html wifi.svg width=16px &nbsp;symbol **lights up** as soon as a connection
/// is established.
/// \~german
/// \section section_getting_started_frontend Frontend öffnen
/// Wenn die Platine neu gestartet wurde und die WLAN Einstellungen korrekt
/// sind, dann verbindet sie sich mit dem Netzwerk. Die **grüne LED** unter dem
/// \image{inline} html wifi.svg width=16px &nbsp;Symbol <b>leuchtet auf</b>
/// sobald eine Verbindung besteht.
/// \~
///
/// \~english
/// From this point on, the web interface ~~will~~ should be available at the
/// local [mDNS](https://en.wikipedia.org/wiki/Multicast_DNS) address (e.g.
/// `http://remise.local`).
/// \~german
/// Ab diesem Zeitpunkt ~~ist~~ sollte die Weboberfläche unter der lokalen
/// [mDNS](https://de.wikipedia.org/wiki/Multicast_DNS) Adresse (z. B.
/// `http://remise.local`) erreichbar sein.
/// \~
///
/// \~english
/// \warning
/// OpenRemise currently only supports
/// [HTTP](https://en.wikipedia.org/wiki/HTTP). Your browser may warn you before
/// accessing this page and ask for explicit permission to access it. To prevent
/// this from happening again on every visit, it is recommended to add an
/// exception.
/// \~german
/// \warning
/// OpenRemise unterstützt derzeit nur
/// [HTTP](https://de.wikipedia.org/wiki/HTTP). Der Browser warnt möglicherweise
/// vor dem Zugriff auf diese Seite und bittet um ausdrückliche Zustimmung. Um
/// dies bei jedem neuen Aufruf zu vermeiden empfiehlt es sich eine Ausnahme in
/// den Browser Einstellungen hinzuzufügen.
/// \~
///
/// \subsection subsection_getting_started_via_mdns ...via mDNS
/// \~english
/// Wait, should? Well, the situation is... complicated. Although all modern
/// browsers support mDNS, they rely on services within the operating system.
/// Unfortunately, this support is limited on **Android** and completely absent
/// from **Windows 10**.
/// \~german
/// Moment, sollte? Ja, die Sitation ist... kompliziert. Zwar unterstützen alle
/// modernen Browser mDNS, aber sie nutzen dafür Dienste des Betriebssystems.
/// Leider ist diese Unterstützung unter **Android** eingeschränkt und unter
/// **Windows 10** gar nicht vorhanden.
/// \~
///
// clang-format off
/// \page page_getting_started
/// \details \tableofcontents
/// \~english
/// | Operating System  | mDNS Support  | Notes                                                                                                                                   |
/// | ----------------- | ------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Linux**         | Yes           | Requires `avahi-daemon` (usually installed by default on major distros).                                                                |
/// | **macOS**         | Yes           | Uses Bonjour                                                                                                                            |
/// | **Windows 10/11** | Yes (partial) | Only if Bonjour or other mDNS responder is installed (e.g., via iTunes, Adobe CC, or manually). Windows 11 has improved native support. |
/// | **Android**       | Partial       | mDNS is supported at the app level via `NsdManager`, but **not integrated system-wide**.                                                |
/// | **iOS/iPadOS**    | Yes           | Bonjour-based                                                                                                                           |
/// \~german
/// | Betriebssystem    | mDNS Unterstützung | Anmerkungen                                                                                                                                                      |
/// | ----------------- | ------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | **Linux**         | Ja                 | Erfordert `avahi-daemon` (in der Regel standardmäßig auf den gängigen Distributionen installiert).                                                               |
/// | **macOS**         | Ja                 | Nutzt Bonjour                                                                                                                                                    |
/// | **Windows 10/11** | Ja  (teilweise)    | Nur wenn Bonjour oder ein anderer mDNS Responder installiert ist (z. B. über iTunes, Adobe CC oder manuell). Windows 11 bietet verbesserte native Unterstützung. |
/// | **Android**       | Teilweise          | mDNS wird auf App Ebene über `NsdManager` unterstützt, ist aber **nicht systemweit integriert**.                                                                 |
/// | **iOS/iPadOS**    | Ja                 | Bonjour-based                                                                                                                                                    |
/// \~
// clang-format on
/// \page page_getting_started
/// \details \tableofcontents
///
/// \subsection subsection_getting_started_via_ip  ...via IP
/// \~english
/// If you have problems connecting via mDNS, I recommend setting up a static
/// [IP address](https://en.wikipedia.org/wiki/IP_address) as described in
/// chapter \ref section_getting_started_wifi. Instead of `remise.local`, you
/// would then type e.g. `192.168.0.4` into the browser's address bar.
/// \~german
/// Falls die Verbindung via mDNS Probleme macht empfielt es sich, wie im
/// Kapitel \ref section_getting_started_wifi beschrieben, eine [statische
/// IP](https://de.wikipedia.org/wiki/IP-Adresse) Adresse einzurichten. Anstelle
/// von `remise.local` erreicht man das Frontend dann indem man z.B.
/// `192.168.0.4` in die Adresszeile des Browsers eintippt.
/// \~
///
/// <div class="section_buttons">
/// | Previous   | Next              |
/// | :--------- | ----------------: |
/// | \ref index | \ref page_faq     |
/// </div>

/// \page page_faq FAQ
/// \details \tableofcontents
/// \~english
/// The \ref page_faq assumes that you already have a working OpenRemise system.
/// For instructions on initial setup, please read the \ref page_getting_started
/// guide.
/// \~german
/// Der \ref page_faq setzt voraus, dass bereits ein funktionierendes OpenRemise
/// System vorhanden ist. Für Anweisungen zur Ersteinrichtung sei an dieser
/// Stelle auf die \ref page_getting_started Anleitung verwiesen.
/// \~
///
/// \~english
/// \section section_faq_support Where to get support?
/// Developers are only human and software may contain bugs. If you encounter
/// any problems, please consider **in the following order** to either
/// - Open an issue on [GitHub](https://github.com/OpenRemise)
/// - Ask in one of the following forum threads
///   -
///   [rmweb.co.uk/forums](https://www.rmweb.co.uk/forums/topic/191684-openremise-new-open-source-command-station-programmer)
/// - Or, **after you have already exhausted the other options**, contact me at
///   vincent.hamp@openremise.at
/// \~german
/// \section section_faq_support Wo erhalte ich Unterstützung?
/// Entwickler sind auch nur Menschen und Software kann Bugs enthalten. Bei
/// Problemen bitte ich in der folgenden Reihenfolge entweder
/// - Ein Issue auf [GitHub](https://github.com/OpenRemise) zu öffnen
/// - In einem der folgenden Forenthreads zu fragen
///   -
///   [stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer.html)
///   -
///   [1zu160.net](https://www.1zu160.net/scripte/forum/forum_show.php?id=1459155)
///   -
///   [h0-modellbahnforum.de](https://www.h0-modellbahnforum.de/t352524f19606-OpenRemise-Neue-Open-Source-Zentrale-Programmer.html)
///   - [forum.opendcc.de](https://forum.opendcc.de/viewtopic.php?t=10524)
///   -
///   [kleinbahnsammler.at](https://www.kleinbahnsammler.at/wbb2/index.php?thread/32730-openremise-neue-open-source-zentrale-programmer/)
/// - Oder, **nachdem alle anderen Möglichkeiten ausgeschöpft sind**, mich unter
///   vincent.hamp@openremise.at zu kontaktieren
/// \~
///
/// \~english
/// \section section_faq_contribute How can I get involved?
/// OpenRemise is chronically understaffed, so **any contributions would be very
/// welcome**. These can be made in a variety of ways, you don't have to be a
/// software or electronics expert to help. You could report bugs you find,
/// write documentation or simply answer questions from other users in forums.
/// Tutorials and/or blog posts would also be great! Of course, if you're a
/// coding ninja \emoji :ninja:, I'm not opposed to that either. My own
/// weaknesses lie in graphics and design, which would be awesome to complement
/// as well.
///
/// If you are interested, please contact me in the forums mentioned \ref
/// section_faq_support "above" or at my email address.
/// \~german
/// \section section_faq_contribute Wie kann ich mich beteiligen?
/// OpenRemise ist chronisch unterbesetzt, daher ist jegliche Unterstützung
/// willkommen. Es gibt viele Möglichkeiten, sich einzubringen, man muss kein
/// Software- oder Elektronikexperte sein um zu helfen. Man kann gefundene
/// Fehler melden, Dokumentation schreiben oder auch einfach nur Fragen anderer
/// Nutzer in Foren beantworten. Tutorials und oder Blogeinträge wären auch
/// super. Wer ein Coding Ninja \emoji :ninja: ist darf natürlich auch gerne
/// Code beitragen. Meine eigenen Schwächen liegen im Bereich Grafik und Design,
/// auch hier gäbe es viel zu tun.
///
/// Bei Interesse kontaktiert mich bitte über die \ref section_faq_support
/// "oben" genannten Foren oder per E-Mail.
/// \~
///
/// \~english
/// \section section_faq_plugs Where can I buy the plugs?
/// The 3.5 and 5.08mm plugs are available from several manufacturers. Since the
/// OpenRemise boards have [Phoenix
/// Contact](https://www.phoenixcontact.com/en-pc) sockets installed, I would
/// suggest purchasing the counterparts from this company as well.
/// \~german
/// \section section_faq_plugs Wo kann ich die Stecker kaufen?
/// Die 3.5 und 5.08mm Stecker sind von verschiedenen Herstellern erhältlich. Da
/// die OpenRemise Platinen mit [Phoenix
/// Contact](https://www.phoenixcontact.com/en-pc) Buchsen ausgestattet sind,
/// empfehle ich die passenden Stecker ebenfalls von diesem Hersteller zu
/// beziehen.
/// \~
///
// clang-format off
/// \page page_faq
/// \details \tableofcontents
/// \~english
/// | Connector   | Manufacturer    | Product Number | Distributor                                                                          |
/// | ----------- | --------------- | -------------- | ------------------------------------------------------------------------------------ |
/// | Track       | Phoenix Contact | 1840366        | [DigiKey](https://www.digikey.at/en/products/detail/phoenix-contact/1840366/349178)  |
/// | Power       | Phoenix Contact | 1836079        | [DigiKey](https://www.digikey.at/en/products/detail/phoenix-contact/1836079/2527923) |
///
/// Alternatively, the plugs are also available directly from ZIMO at various
/// model railway shops, e.g.
/// | Connector   | Manufacturer    | Product Number | Distributor                                                                                                                                                                                                                                                                                               |
/// | ----------- | --------------- | -------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | Track       | Phoenix Contact | 2POLSTECK-K    | [fischer-modell](https://fischer-modell.de/Hersteller/ZIMO/Zubehoer/Stecker-Kabel-und-Buchsen/ZIMO-2POLSTECK-K) or\n[Tina's Modelleisenbahn](https://www.tinas-modelleisenbahn.at/digitale-komponenten/zimo-2polsteck-g-2pol-stecker-fuer-trafoanschluss-mx1-mxulf-.html?xoid=6rpdq78bqstn43mrs3i2lc9bn8) |
/// | Power       | Phoenix Contact | 2POLSTECK-G    | [fischer-modell](https://fischer-modell.de/Hersteller/ZIMO/Zubehoer/Stecker-Kabel-und-Buchsen/ZIMO-2POLSTECK-G) or\n[Tina's Modelleisenbahn](https://www.tinas-modelleisenbahn.at/digitale-komponenten/zimo-2polsteck-k-2pol-stecker-fuer-schienenanschluss-mx1-mx-.html?xoid=80bp37lg1vo45qcujaofhgchei) |
/// \~german
/// | Stecker | Hersteller      | Produktnummer | Händler                                                                              |
/// | ------- | --------------- | ------------- | ------------------------------------------------------------------------------------ |
/// | Track   | Phoenix Contact | 1840366       | [DigiKey](https://www.digikey.at/de/products/detail/phoenix-contact/1840366/349178)  |
/// | Power   | Phoenix Contact | 1836079       | [DigiKey](https://www.digikey.at/de/products/detail/phoenix-contact/1836079/2527923) |
///
/// Alternativ sind die Stecker auch direkt von ZIMO in verschiedenen
/// Modellbahnläden erhältlich, z.B.
/// | Stecker | Hersteller      | Produktnummer | Händler                                                                                                                                                                                                                                                                                                     |
/// | ------- | --------------- | ------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
/// | Track   | Phoenix Contact | 2POLSTECK-K   | [fischer-modell](https://fischer-modell.de/Hersteller/ZIMO/Zubehoer/Stecker-Kabel-und-Buchsen/ZIMO-2POLSTECK-K) oder\n[Tina's Modelleisenbahn](https://www.tinas-modelleisenbahn.at/digitale-komponenten/zimo-2polsteck-g-2pol-stecker-fuer-trafoanschluss-mx1-mxulf-.html?xoid=6rpdq78bqstn43mrs3i2lc9bn8) |
/// | Power   | Phoenix Contact | 2POLSTECK-G   | [fischer-modell](https://fischer-modell.de/Hersteller/ZIMO/Zubehoer/Stecker-Kabel-und-Buchsen/ZIMO-2POLSTECK-G) oder\n[Tina's Modelleisenbahn](https://www.tinas-modelleisenbahn.at/digitale-komponenten/zimo-2polsteck-k-2pol-stecker-fuer-schienenanschluss-mx1-mx-.html?xoid=80bp37lg1vo45qcujaofhgchei) |
/// \~
// clang-format on
/// \page page_faq
/// \details \tableofcontents
///
/// \~english
/// \section section_faq_wifi What can I do about poor WiFi reception?
/// The OpenRemise boards use a small onboard antenna mounted directly on the
/// PCB. These antennas don't have particularly good performance
/// characteristics. Therefore, it's important that the network signal strength
/// is as high as possible. The signal strength (RSSI or <b>r</b>eceived
/// <b>s</b>ignal <b>s</b>trength <b>i</b>ndicator) can be read on the info
/// screen in the web interface and should be **at least 60%**. If the
/// connection times out from time to time despite a good signal strength, it
/// may be helpful to check the Bluetooth devices in the area for possible
/// interference.
/// \~german
/// \section section_faq_wifi Was kann ich gegen schlechten WLAN Empfang tun?
/// Die OpenRemise Platinen verwenden kleine onboard PCB Antennen. Diese
/// Antennen weisen keine besonders guten Eigenschaften auf. Daher ist eine
/// möglichst hohe Netzwerksignalstärke wichtig. Die Signalstärke (RSSI oder
/// <b>R</b>eceived <b>S</b>ignal <b>S</b>trength <b>I</b>ndicator) kann im
/// Info Bildschirm der Weboberfläche abgelesen werden und sollte **mindestens
/// 60%** betragen. Falls die Verbindung trotz guter Signalstärke gelegentlich
/// abbricht kann es hilfreich sein die Bluetooth-Geräte in der Umgebung auf
/// mögliche Störungen zu überprüfen.
/// \~
///
/// \~english
/// \section section_faq_z21_app How to connect using the Z21 app?
/// Unfortunately, the [Z21 app](https://www.z21.eu/en/products/z21-app)
/// currently does not support mDNS resolution but requires the manual entry of
/// an IP address. However, to find out the IP address of your OpenRemise board,
/// it is sufficient to access the homepage of your domain. The IP address that
/// is shown on the info screen is also the one that must be entered in the Z21
/// app.
/// \~german
/// \section section_faq_z21_app Wie verbinde ich mich mit der Z21 App?
/// Leider unterstützt die [Z21 App](https://www.z21.eu/de/produkte/z21-app)
/// derzeit keine mDNS Auflösung sondern erfordert die manuelle Eingabe der IP
/// Adresse. Um die IP Adresse der OpenRemise Platine zu ermitteln genügt es die
/// Weboberfläche zu öffnen. Die IP Adresse die am Info Bildschirm angezeigt
/// wird ist auch jene die in der Z21 App eingegeben werden muss.
/// \~
///
// clang-format off
/// \page page_faq
/// \details \tableofcontents
/// \~english
/// \image html how_to_connect_using_the_z21_app.png "Frontend homepage / Z21 app settings screen" width=480px
/// \~german
/// \image html how_to_connect_using_the_z21_app.png "Frontend Startseite / Z21 App Einstellungen" width=480px
/// \~
// clang-format on
/// \page page_faq
/// \details \tableofcontents
///
/// \~english
/// \section section_faq_capport How to reopen the captive portal?
/// If the board can no longer log into your WiFi for some reason, e.g. because
/// the password has been changed or you made a typo in the captive portal, you
/// can create an access point by holding down BOOT for about **5 seconds**
/// during operation. The blue LED then lights up and an access point called
/// **OpenRemise** opens. There you can change the WiFi password as already seen
/// in the \ref section_getting_started_wifi "Getting Started" Guide.
/// \~german
/// \section section_faq_capport Wie kann das Captive Portal wieder öffnen?
/// Falls sich die Platine aus irgendeinem Grund nicht mehr mit dem WLAN
/// Netzwerk verbindet, z.B. weil sich das Password geändert hat oder man sich
/// im Captive Portal vertippt hat, so lässt sich durch drücken des BOOT Tasters
/// für **5 Sekunden** der Access Point wiederherstellen. Die blaue LED leuchtet
/// auf und ein ein Access Point namens **OpenRemise** wird erstellt. Hier
/// lassen sich die WLAN Einstellungen wie bereits in der \ref
/// section_getting_started_wifi "Erste Schritte" Anleitung beschrieben ändern.
/// \~
///
/// \~english
/// \section section_faq_ilim Which current limit is right for me?
/// As a rule of thumb, I recommend the following settings for normal operation:
/// | Current [A] | Nominal size                                       |
/// | ----------- | -------------------------------------------------- |
/// | 0.5         | Service mode                                       |
/// | 1.3         | [Z scale](https://en.wikipedia.org/wiki/Z_scale)   |
/// | 2.7         | [N scale](https://en.wikipedia.org/wiki/N_scale)   |
/// | 4.1         | [H0 scale](https://en.wikipedia.org/wiki/HO_scale) |
// clang-format off
/// \page page_faq
/// \details \tableofcontents
/// \~german
/// \section section_faq_ilim Welche Strombegrenzung ist die richtige für mich?
/// Als Faustregel empfehle ich für den normalen Betrieb die folgenden
/// Einstellungen:
/// | Strom [A] | Nenngröße                                                            |
/// | --------- | -------------------------------------------------------------------- |
/// | 0.5       | Service Mode                                                         |
/// | 1.3       | [Nenngröße Z](https://de.wikipedia.org/wiki/Nenngr%C3%B6%C3%9Fe_Z)   |
/// | 2.7       | [Nenngröße N](https://de.wikipedia.org/wiki/Nenngr%C3%B6%C3%9Fe_N)   |
/// | 4.1       | [Nenngröße H0](https://de.wikipedia.org/wiki/Nenngr%C3%B6%C3%9Fe_H0) |
// clang-format on
/// \page page_faq
/// \details \tableofcontents
/// \~
///
/// \~english
/// \section section_faq_decup Why doesn't the ZIMO decoder update work?
/// This can have different reasons depending on the decoder type:
/// - For MS/N and FS/N decoders, any energy storage in the decoder must be
///   completely empty. If this is not the case, the decoder will not recognize
///   the entry into the bootloader. This mainly affects large-scale decoders or
///   decoders with [goldcaps or
///   STACO](https://www.zimo.at/web2010/products/energiespeicher_EN.htm).
/// - For MX decoders, the analog mode (CV29=10) and the update lock (CV144=0)
///   must be deactivated.
/// \~german
/// \section section_faq_decup Warum funktioniert das ZIMO Decoder Update nicht?
/// Das kann je nach Decoder Typ unterschiedliche Gründe haben:
/// - Bei MS/N und FS/N Decodern müssen die Energiespeicher vollständig entleert
///   sein. Andernfalls erkennt der Decoder den Eintritt in den Bootloader
///   nicht. Dies betrifft hauptsächlich Großbahn-Decoder oder Decoder mit
///   [Goldcaps oder
///   STACO](https://www.zimo.at/web2010/products/energiespeicher.htm).
/// - Bei MX Decodern muss der Analogmodus (CV29=10) und die Updatesperre
///   (CV144=0) deaktiviert sein.
/// \~
///
/// \~english
/// \section s_f_m How to speed up mDNS resolution on Linux?
/// If you experience slowdowns in resolving `*remise.local` on
/// [Linux](https://wiki.archlinux.org/title/Avahi) you could try to edit the
/// `hosts` entry of `/etc/nsswitch.conf`. Use `mdns4_minimal` and `mdns4`
/// instead of `mdns_minimal` and `mdns` respectively.
/// \~german
/// \section s_f_m Wie kann die mDNS Auflösung unter Linux beschleunigt werden?
/// Falls es unter [Linux](https://wiki.archlinux.org/title/Avahi) zu
/// Verzögerungen beim Auflösen von `*remise.local` kommt kann dies am `hosts`
/// entry in `/etc/nsswitch.conf` liegen. Ich empfehle hier die expliziten IPv4
/// Versionen einzustellen, sprich `mdns4_minimal` und `mdns4` statt
/// `mdns_minimal` und `mdns`.
/// \~
///
/// \~english
/// For example, this is what `nsswitch.conf` looks like on my machine:
/// \~german
/// So sieht beispielsweise `nsswitch.conf` auf meinem Rechner aus:
/// \~
// clang-format off
/// \page page_faq
/// \details \tableofcontents
/// ```sh
/// # hosts: mymachines mdns_minimal [NOTFOUND=return] resolve [!UNAVAIL=return] files myhostname dns
/// hosts: mymachines mdns4_minimal [NOTFOUND=return] resolve [!UNAVAIL=return] files myhostname dns
/// ```
// clang-format on
/// \page page_faq
/// \details \tableofcontents
///
/// \~english
/// \section section_cases I'm looking for a case?
/// Don’t worry, you’re apparently not alone in this wish. \emoji :blush:
/// \~german
/// \section section_cases Ich suche eine Gehäuse?
/// Keine Sorge, diesen Wunsch hatten schon mehrere. \emoji :blush:
/// \~
///
// clang-format off
/// \page page_faq
/// \details \tableofcontents
/// \~english
/// - [Acryl case by the user 12mm @ opendcc.de](https://forum.opendcc.de/viewtopic.php?p=115582#p115582)<br>
/// Not everyone will have the opportunity for laser cutting, but if that isn't
/// beautiful then I don't know what is.
/// \image html ../cases/12mm.jpg "Lasercut acryl case" width=480px
/// Download [DXF file](../cases/12mm.dxf)<br><br>
///
/// - [3D printed case by the user ET-440 @ stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer-1.html#msg2818168)<br>
/// A fully enclosed case that protects the circuit board very well. It is
/// secured with four 16mm M3 screws. Unfortunately, it obscures the LEDs. If
/// you don't own a printer yourself, you can order it from [3d-druck-amann.de](https://3d-druck-amann.de).
/// \image html ../cases/et-440.jpeg "3D printed housing" width=480px
/// Download [STEP file](../cases/et-440.zip)<br><br>
///
/// - [3D printed case by the user ERI_BE @ stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer-4.html#msg2885252)<br>
/// Another fully enclosed 3D printed case that even comes with the option to
/// install light guides. The cover is secured with 6mm M3 screws.
/// \image html ../cases/eri_be.png "3D printed housing" width=480px
/// Download [STL/FreeCad files](../cases/eri_be.zip)<br><br>
///
/// - [Support (Case) for OpenRemise - Remix by the user vhb @ 1zu160.de](https://www.1zu160.net/scripte/nliste/detail.php?id=17819&fid=1455763)<br>
/// Sometimes all you need is a stand, especially useful for developers.
/// \image html https://cdn.thingiverse.com/assets/ab/c1/3e/df/f3/large_display_IMG_20250424_153304.jpg "Support (Case) for OpenRemise - Remix" width=480px
/// Download https://www.thingiverse.com/thing:7020922<br><br>
/// \~german
/// - [Acryl Gehäuse des Nutzers 12mm @ opendcc.de](https://forum.opendcc.de/viewtopic.php?p=115582#p115582)<br>
/// Nicht jeder wird die Möglichkeit zum Laserschneiden haben, aber wenn das
/// nicht hübsch ist, dann weiß ich auch nicht.
/// \image html ../cases/12mm.jpg "Lasercut Acryl Gehäuse" width=480px
/// [DXF file](../cases/12mm.dxf) herunterladen<br><br>
///
/// - [3D Druck Gehäuse des Nutzers ET-440 @ stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer-1.html#msg2818168)<br>
/// Ein vollständig geschlossenes Gehäuse, das die Platine optimal schützt. Es
/// wird mit vier 16mm M3 Schrauben befestigt. Leider verdeckt es die LEDs.
/// Für den Fall dass man keinen eigenen 3D Drucker besitzt kann man es bei
/// [3d-druck-amann.de](https://3d-druck-amann.de) bestellen.
/// \image html ../cases/et-440.jpeg "3D Druck Gehäuse" width=480px
/// [STEP file](../cases/et-440.zip) herunterladen<br><br>
///
/// - [3D Druck Gehäuse des Nutzers ERI_BE @ stummiforum.de](https://www.stummiforum.de/t233609f7-OpenRemise-Neue-Open-Source-Zentrale-Programmer-4.html#msg2885252)<br>
/// Ein weiteres vollständig geschlossenes 3D gedrucktes Gehäuse, das sogar die
/// Möglichkeit bietet, Lichtleiter zu installieren. Der Deckel wird mit 6mm M3
/// Schrauben befestigt.
/// \image html ../cases/eri_be.png "3D Druck Gehäuse" width=480px
/// [STL/FreeCad files](../cases/eri_be.zip) herunterladen<br><br>
///
/// - [Support (Gehäuse) für OpenRemise des Nutzers vhb @ 1zu160.de](https://www.1zu160.net/scripte/nliste/detail.php?id=17819&fid=1455763)<br>
/// Manchmal braucht man einfach nur eine Auflage, besonders nützlich für
/// Entwickler.
/// \image html https://cdn.thingiverse.com/assets/ab/c1/3e/df/f3/large_display_IMG_20250424_153304.jpg "Support (Gehäuse) für OpenRemise" width=480px
/// https://www.thingiverse.com/thing:7020922 herunterladen<br><br>
/// \~
// clang-format on
/// \page page_faq
/// \details \tableofcontents
///
/// \~english
/// \section section_service_mode Service mode is not working?
/// Unfortunately, many manufacturers do not adhere to DCC standards and do not
/// even manage to implement the service mode according to specifications. If
/// you experience CV verify problems with a decoder, I would suggest increasing
/// the number of programming packets in the settings and, if necessary,
/// reducing the ACK current. Increasing the number of startup reset packets can
/// also help if a decoder takes too long to boot.
/// \~german
/// \section section_service_mode Service Mode funktioniert nicht?
/// Leider halten sich viele Hersteller nicht an die DCC Standards und
/// implementieren den Service Mode nicht spezifikationsgemäß. Sollte das CV
/// Lesen bei einem Decoder nicht funktionieren, so kann es helfen die Anzahl
/// der Programmierpakete in den Einstellungen zu erhöhen und gegebenenfalls den
/// ACK Strom zu reduzieren. Auch eine Erhöhung der Anzahl an Startup-Reset
/// Paketen kann helfen, sofern der Decoder zu lange zum Hochfahren benötigt.
/// \~
///
/// \~english
/// \section s_or_up The web interface is acting up after the update?
/// If the web interface starts acting up after an OpenRemise update, you should
/// clear your browser cache. The browser simply doesn't recognize that the
/// underlying application has changed.
/// \~german
/// \section s_or_up Die Weboberfläche funktioniert nach dem Update nicht mehr?
/// Falls die Weboberfläche nach einem OpenRemise Update Probleme bereitet,
/// sollte man den Browser Cache leeren. Der Browser erkennt die Änderung der
/// zugrundeliegenden Anwendung schlichtweg nicht.
/// \~
///
/// <div class="section_buttons">
/// | Previous                  | Next             |
/// | :------------------------ | ---------------: |
/// | \ref page_getting_started | \ref page_videos |
/// </div>

/// \page page_videos Videos
///
// clang-format off
/// \page page_videos
/// \~english
/// \details
/// \htmlonly
/// <iframe width="480" height="270" src="https://www.youtube.com/embed/wfi0bsJeZnY" title="Getting Started with an S3Main" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <br><br>
/// <iframe width="480" height="270" src="https://www.youtube.com/embed/ne2UJQB1fUw" title="Updating an S3Main" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// \endhtmlonly
// clang-format on
/// \page page_videos
/// \details
///
// clang-format off
/// \page page_videos
/// \~german
/// \details
/// \htmlonly
/// <iframe width="480" height="270" src="https://www.youtube.com/embed/VNWBDyTOREM" title="Erste Schritte mit einem S3Main" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// <br><br>
/// <iframe width="480" height="270" src="https://www.youtube.com/embed/wuVNNiUtJMg" title="Updaten eines S3Main" allow="picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
/// \endhtmlonly
// clang-format on
/// \page page_videos
/// \details
///
/// <div class="section_buttons">
/// | Previous      | Next              |
/// | :------------ | ----------------: |
/// | \ref page_faq | \ref page_history |
/// </div>

/// \~english
/// \page page_history History
/// \~german
/// \page page_history Geschichte
/// \~
/// \details \tableofcontents
///
/// \~english
/// This project originally started back in 2021 as a decoder update device for
/// my then (and still current) employer. I had already been working in the
/// model railway industry since 2015 and had the feeling that the possibilities
/// of modern electronics and especially their connectivity were not being fully
/// exploited. All decoder update devices available on the market at that time
/// had a USB port, if any at all...
/// \~german
/// Dieses Projekt begann ursprünglich 2021 als Decoder-Update-Gerät für meinen
/// damaligen (und immer noch aktuellen) Arbeitgeber. Ich arbeitete bereits seit
/// 2015 in der Modellbahnbranche und hatte den Eindruck, dass die Möglichkeiten
/// moderner Elektronik, insbesondere ihre Netzwerkfähigkeiten, nicht voll
/// ausgeschöpft wurden. Alle damals am Markt erhältlichen Geräte hatten wenn
/// überhaupt einen USB Anschluss...
/// \~
///
/// \~english
/// So I started working on a Bluetooth decoder update device in my free time.
/// The first prototype was called **MSBlueZ** and was built on an
/// [STMicroelectronics](https://www.st.com/content/st_com/en.html)
/// [STM32WB55](https://www.st.com/en/microcontrollers-microprocessors/stm32wb55rg.html)
/// basis.
/// \~german
/// Also begann ich in meiner Freizeit mit der Entwicklung eines
/// Bluetooth fähigen Decoder-Update-Geräts. Der erste Prototyp trug den Namen
/// **MSBlueZ** und basierte auf einem
/// [STMicroelectronics](https://www.st.com/content/st_com/en.html)
/// [STM32WB55](https://www.st.com/en/microcontrollers-microprocessors/stm32wb55rg.html).
/// \~
///
/// \~english
/// \image html msbluez.png "One of the first \"MSBlueZ\" prototypes"
/// \~german
/// \image html msbluez.png "Einer der ersten \"MSBlueZ\" Prototypen"
/// \~
///
/// \~english
/// The "Bluetooth part" didn't last long though. One day I stumbled upon a demo
/// of someone serving an HTML page from an
/// [ESP32](https://www.espressif.com/en/products/socs/esp32) over WiFi and I've
/// obsessed over the idea ever since. The fact that
/// [Espressif](https://www.espressif.com) announced an ESP32 with USB at around
/// the same time was a sign to me, and so Bluetooth on an STM32 quickly became
/// WiFi on an ESP32. At the time, I had not considered how much additional work
/// my decision would entail...
/// \~german
/// Der "Bluetooth Teil" hielt allerdings nicht lange an. Eines Tages stieß ich
/// zufällig auf eine Demo, in der jemand eine HTML-Seite von einem Webserver
/// auslieferte, der auf einem
/// [ESP32](https://www.espressif.com/en/products/socs/esp32) lief, und ich war
/// von der Idee fasziniert. Dass [Espressif](https://www.espressif.com) etwa
/// zur gleichen Zeit einen ESP32 mit USB ankündigte, war für mich ein Zeichen,
/// und so wurde aus Bluetooth auf einem STM32 schnell WiFi auf einem ESP32.
/// Damals wusste ich allerdings glücklicherweise noch nicht wie viel
/// zusätzliche Arbeit diese Entscheidung so mit sich bringen würde...
/// \~
///
/// \~english
/// Suddenly I had to deal with HTTP requests and WebSockets, something I had no
/// idea about. In that sense, this turned out to be a very educational side
/// project, as I finally had to deal with web technologies.
/// I only just managed to escape my nemesis,
/// [JavaScript](https://www.destroyallsoftware.com/talks/wat), by learning
/// [Dart](https://dart.dev) and [Flutter](https://flutter.dev) \image{inline}
/// html flutter_dash.svg "" for writing the
/// [Frontend](https://openremise.at/Frontend), a combination that I've come to
/// appreciate very much.
/// \~german
/// Auf einmal musste ich mich mit HTTP Requests und WebSockets
/// auseinandersetzen, etwas von dem ich davor keine Ahnung hatte. In diesem
/// Sinne erwies sich dies als ein sehr lehrreiches Nebenprojekt, da ich mich
/// endlich mit Webtechnologien auseinandersetzen musste. Meinem Nemesis,
/// [JavaScript](https://www.destroyallsoftware.com/talks/wat), konnte ich aber
/// gerade nochmal so entkommen indem ich [Dart](https://dart.dev) und
/// [Flutter](https://flutter.dev) \image{inline} html flutter_dash.svg "" für
/// mein Frontend lernte, eine Kombination, die ich mittlerweile sehr zu
/// schätzen weiß.
/// \~
///
/// \~english
/// However, the additional workload was not the only problem. The path to the
/// final design of my H-bridge led via **3 different fully integrated ICs**,
/// each of which had its own problems... I will spare you all the details, but
/// one of these problematic H-bridges was the
/// [DRV8874](https://www.ti.com/product/de-de/DRV8874), seen here in a
/// prototype called **WULF**.
/// \~german
/// Leider erwies sich der zusätzliche Arbeitsaufwand nicht als einizges
/// Problem. Der Pfad zu einem finalen Design der H-Brücke führte über **3
/// unterschiedliche vollintegrierte ICs**, jeder mit seinen ganz eigenen
/// Problemchen... Ich spare mir hier an dieser Stelle weitere Details, einer
/// dieser problematischen H-Brücken-Treiber war jedenfalls der
/// [DRV8874](https://www.ti.com/product/de-de/DRV8874), der hier auf einem
/// Prototypen namens **WULF** zu sehen ist.
/// \~
///
/// \~english
/// \image html wulf.png "\"WULF\" prototype with DRV8874 H-bridge"
/// \~german
/// \image html wulf.png "\"WULF\" Prototyp mit DRV8874 H-Brücke"
/// \~
///
/// \~english
/// At some point during this development process I also had the crazy idea of
/// making the design [Arduino](https://www.arduino.cc/) compatible. What is
/// never shown on these beautiful PCB pictures on the internet, however, is how
/// **incredibly fiddly** this stacking is... After just one iteration of this
/// design, I had had enough.
/// \~german
/// An irgendeinem Punkt der Entwicklung hatte ich auch die Schnapsidee mein
/// Design [Arduino](https://www.arduino.cc/)-kompatibel zu gestalten. Was
/// jedoch auf diesen hübschen Leiterplattenbildchen im Internet nie zu sehen
/// ist, ist, wie unglaublich fummmlig das Stapeln ist... Nach nur einer
/// Iteration dieses Designs hatte ich genug.
/// \~
///
// clang-format off
/// \page page_history
/// \details \tableofcontents
/// \~english
/// \image html esp32s3board_drv8328shield.png "Arduino inspired \"ESP32S3Board\" stacked on a \"DRV8328Shield\""
/// \~german
/// \image html esp32s3board_drv8328shield.png "Arduino-inspiriertes \"ESP32S3Board\" auf einem \"DRV8328Shield\""
/// \~
// clang-format on
/// \page page_history
/// \details \tableofcontents
///
/// \~english
/// From this time on, however, the hardware did not change fundamentally.
/// **OpenRemise** was set as the project name and the design was reduced back
/// to a single board.
/// \~german
/// Ab diesem Zeitpunkt änderte sich die Hardware jedoch nicht mehr grundlegend.
/// **OpenRemise** wurde als Projektname festgelegt und das Design wieder auf
/// eine einzelne Platine reduziert.
/// \~
///
// clang-format off
/// \page page_history
/// \details \tableofcontents
/// \~english
/// \image html s3main_reva.png "Final H-bridge design on the first \"S3Main\" revision"
/// \~german
/// \image html s3main_reva.png "Finales H-Brücken Design auf der ersten \"S3Main\" Revision"
/// \~
// clang-format on
/// \page page_history
/// \details \tableofcontents
///
/// \~english
/// When the project was in a reasonably presentable state, I showed it to my
/// employer, who, however, showed no commercial interest in it. At this point
/// it was clear that I had to open source the project so that all my work would
/// not be in vain. The [DCC-EX](https://dcc-ex.com) project and it's success
/// gave me the confidence to actually do this, even though the release was
/// still a long way off at the time...
/// \~german
/// Als das Projekt einen einigermaßen vorzeigbaren Zustand erreicht hatte,
/// ging ich damit zu meinem Arbeitgeber, der jedoch kein kommerzielles
/// Interesse daran zeigte. Mir wurde klar, dass ich das Projekt als Open Source
/// veröffentlichen musste, damit meine ganze Arbeit nicht umsonst gewesen wäre.
/// Das [DCC-EX](https://dcc-ex.com)-Projekt und sein Erfolg gaben mir das
/// nötige Selbstvertrauen, dies tatsächlich zu tun, obwohl die Veröffentlichung
/// zu diesem Zeitpunkt noch in weiter Ferne lag.
/// \~
///
/// <div class="section_buttons">
/// | Previous         |
/// | :--------------- |
/// | \ref page_videos |
/// </div>
