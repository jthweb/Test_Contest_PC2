# 🖥️ PC² Setup for ICPC-Style Contests (Windows)

This guide walks you through setting up the [PC² Contest Control System](https://github.com/pc2ccs) for **ICPC-style contests** on **Windows**. A Linux (WSL) setup is coming soon.

---

## 🗂️ Folder Structure

Create the main directory at:  
`C:\pc2`

Download and extract the following tools **into this folder**.

```
C:/
├── MinGW/
│   └── bin/
├── pc2/
│   ├── kotlinc/
│   │   └── bin/
│   ├── pypy3.11-v7.3.20-win64/
│   ├── pc2-9.11build/
│   │   ├── bin/
│   │   └── projects/
│   │       └── WebTeamInterface-1.2/
│   │           └── bin/
│   ├── resolver/
│   └── TestContest/
│       └── config/
```

---

## 🌐 Required Downloads

| Tool              | Link                                                                 |
|-------------------|----------------------------------------------------------------------|
| PC² Nightly Build | [GitHub Releases](https://github.com/pc2ccs/nightly-builds/tags)    |
| PyPy3             | [pypy.org](https://www.pypy.org/download.html)                      |
| Kotlin            | [GitHub Releases](https://github.com/JetBrains/kotlin/releases)     |
| Java + JDK        | [Java](https://www.java.com/en/download/) + [JDK](https://oracle.com/java/technologies/downloads/#jdk24-windows) |
| MinGW             | [SourceForge](https://sourceforge.net/projects/mingw/)               |
| ICPC Resolver     | [tools.icpc.global](https://tools.icpc.global/resolver/)             |

---

## ⚙️ Environment Variables

Update your **system `PATH`** with:

```
C:\pc2\pc2-9.11build\bin
C:\pc2\pc2-9.11build\projects\WebTeamInterface-1.2\bin
C:\pc2\kotlinc\bin
C:\pc2\pypy3.11-v7.3.20-win64\
C:\MinGW\bin
C:\Program Files\Java\jre1.8.0_451\bin
C:\Program Files\Java\jdk-24\bin
C:\Program Files\Java\latest\jre-1.8\bin
```

> 📝 Note: Adjust paths to match the versions you installed or the folder in which you placed the folder. Also make sure the names in the PATH have no space in them. Use underscores or other characters to fill it in.

---

## 🚀 Contest Launch Guide

### 1. Start the Server

```sh
cd C:\pc2\TestContest\config
pc2server --load "C:\pc2\TestContest\config"
```

- Login: `site1` / `site1`
- Set and remember a **contest password**

### 2. Launch the Admin Panel

```sh
pc2admin
```

- Login: `root` / `administrator1`
- Verify CDP-loaded:
  - Problems
  - Groups
  - Languages

Edit and verify:
- **Problems → Edit**
- **Languages tab**
- **Times → Site1 → Edit Start Time or Start Contest**

### 3. Start Judge Panel

```sh
pc2judge
```

- Login: `judge1` / `judge1`

### 4. Start Web Team Interface (WTI)

```sh
cd C:\pc2\pc2-9.11build\projects\WebTeamInterface
pc2wti
```

Then open: [https://localhost:8080](https://localhost:8080)

- Login using username and password `teamx` / `teamx` (where x is team number)

And that's all! The server is set! Now start the contest from the admin panel by clicking on the `Times` tab and click on the site you want to start. You can also additionally change the start and end times to your system time, rather than manually starting and ending the contest.

### 5. Resolve the Contest

Go to the "Reports" tab from an "administrator" account or from the "server".
Select the "Results Export Files"
from the "Reports" pull-down list, then press the "Export Report Contents" button. A window will pop up showing you
where it created the reports, for example:

```
pc2 results dir : reports\report.Results_Export_Files.06.18.126.txt.files
Contest finalized : No. (Warning - contest is not finalized)
Wrote results files to:
reports\report.Results_Export_Files.06.18.126.txt.files\results.tsv
reports\report.Results_Export_Files.06.18.126.txt.files\scoreboard.json
reports\report.Results_Export_Files.06.18.126.txt.files\awards.json
reports\report.Results_Export_Files.06.18.126.txt.files\event-feed.ndjson
```

If you are not using the nightly build, you'll have to generate 2 reports: the "Event Feed JSON" report and the "awards
JSON" report.

```sh 
cd C:\pc2\resolver
resolver.bat C:\pc2\TestContest\resolver
```

Follow the guide from ICPC for using the resolver 

> 📝 Note:  Make sure to adjust the path of the resolver based on where you exported the finalized data.

Congrats! You have successfully hosted your first contest using PC²!

---

## 🧭 Coming Soon

- ✅ **WSL (Linux) setup instructions**
- 🔄 Scripts for automated setup
- 💡 Troubleshooting & FAQ

---

## 🧑‍🤝‍🧑 Contributing

Pull requests are welcome! Feel free to submit improvements for:
- Linux compatibility
- Setup scripts

---

## 📄 License

GNU v3.0 License. See `LICENSE` file for details.


### Special thanks to [John Buck](https://github.com/johnbrvc) for helping me learn how to set up PC².
