# openremise.github.io

[![docs](https://github.com/OpenRemise/openremise.github.io/actions/workflows/docs.yml/badge.svg)](https://github.com/OpenRemise/openremise.github.io/actions/workflows/docs.yml) [![license](https://img.shields.io/github/license/OpenRemise/openremise.github.io)](https://github.com/OpenRemise/openremise.github.io/raw/master/LICENSE)

<a href="https://openremise.at">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://github.com/OpenRemise/.github/raw/master/data/icons/icon_dark.svg">
  <img src="https://github.com/OpenRemise/.github/raw/master/data/icons/icon_light.svg" width="20%" align="right">
</picture>
</a>

openremise.github.io contains the source code for the [OpenRemise](https://openremise.at) website. It serves as the public landing page and information hub for the OpenRemise project, providing an introduction, a getting started guide and links to further documentation.

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#features">Features</a></li>
    <li><a href="#getting-started">Getting Started</a></li>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#build">Build</a></li>
      </ul>
  </ol>
</details>

## Features
- Uniform look for landing page and project documentation
- Modern look despite Doxygen due to [Doxygen Awesome](https://github.com/jothepro/doxygen-awesome-css)
- No ads, no tracking or other B$

## Getting Started
### Prerequisites
- [CMake](https://cmake.org) ( >= 3.25 )
- [graphviz](https://graphviz.org) ( >= 14.0.0 )
- [openjdk](https://openjdk.org) ( >= 21 )

### Build
The website gets published automatically with each push to the master branch through the [docs workflow](.github/workflows/docs.yml). However, it is also possible to build the site locally if the prerequisites are installed.
```sh
cmake --preset "Release"
cmake --build build --parallel --target OpenRemiseDocs
```

If the build was successful, the website can be viewed simply with a browser by opening `build/docs/html/index.html` or by creating a small web server.
```sh
python -m http.server --directory build/docs/html --bind 127.0.0.1
```