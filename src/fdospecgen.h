// WARNING: this is an autogenerated file. Any change might be overwritten!
LPCSTR ANY[] = { "", "|", nullptr };
LPCSTR AudioVideo[] = { "AudioVideo", "|", nullptr };
LPCSTR AudioVideoAudio[] = { "AudioVideo", "Audio", "|", nullptr };
LPCSTR AudioVideoVideo[] = { "AudioVideo", "Video", "|", nullptr };
LPCSTR AudioVideoorEducation[] = { "AudioVideo", "|", "Education", "|", nullptr };
LPCSTR AudioorVideoorAudioVideo[] = { "Audio", "|", "Video", "|", "AudioVideo", "|", nullptr };
LPCSTR Development[] = { "Development", "|", nullptr };
LPCSTR EducationComputerScienceorScienceComputerScience[] = { "Education", "ComputerScience", "|", "Science", "ComputerScience", "|", nullptr };
LPCSTR EducationMathorScienceMath[] = { "Education", "Math", "|", "Science", "Math", "|", nullptr };
LPCSTR EducationorScience[] = { "Education", "|", "Science", "|", nullptr };
LPCSTR EducationorScienceorUtility[] = { "Education", "|", "Science", "|", "Utility", "|", nullptr };
LPCSTR Game[] = { "Game", "|", nullptr };
LPCSTR Graphics[] = { "Graphics", "|", nullptr };
LPCSTR Graphics2DGraphics[] = { "Graphics", "2DGraphics", "|", nullptr };
LPCSTR GraphicsScanning[] = { "Graphics", "Scanning", "|", nullptr };
LPCSTR GraphicsorOffice[] = { "Graphics", "|", "Office", "|", nullptr };
LPCSTR Network[] = { "Network", "|", nullptr };
LPCSTR NetworkorAudio[] = { "Network", "|", "Audio", "|", nullptr };
LPCSTR NetworkorDevelopment[] = { "Network", "|", "Development", "|", nullptr };
LPCSTR Office[] = { "Office", "|", nullptr };
LPCSTR OfficeorDevelopment[] = { "Office", "|", "Development", "|", nullptr };
LPCSTR OfficeorDevelopmentorAudioVideo[] = { "Office", "|", "Development", "|", "AudioVideo", "|", nullptr };
LPCSTR OfficeorNetwork[] = { "Office", "|", "Network", "|", nullptr };
LPCSTR OfficeorTextTools[] = { "Office", "|", "TextTools", "|", nullptr };
LPCSTR Settings[] = { "Settings", "|", nullptr };
LPCSTR SettingsHardwareSettings[] = { "Settings", "HardwareSettings", "|", nullptr };
LPCSTR SettingsorSystem[] = { "Settings", "|", "System", "|", nullptr };
LPCSTR SettingsorUtility[] = { "Settings", "|", "Utility", "|", nullptr };
LPCSTR System[] = { "System", "|", nullptr };
LPCSTR SystemFileTools[] = { "System", "FileTools", "|", nullptr };
LPCSTR SystemorGame[] = { "System", "|", "Game", "|", nullptr };
LPCSTR SystemorNetwork[] = { "System", "|", "Network", "|", nullptr };
LPCSTR Utility[] = { "Utility", "|", nullptr };
LPCSTR UtilityArchiving[] = { "Utility", "Archiving", "|", nullptr };
LPCSTR UtilityorSystem[] = { "Utility", "|", "System", "|", nullptr };

namespace spec {

tListMeta menuinfo[] =
{
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("2DGraphics"), "2DGraphics", "folder", (char**) &Graphics, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("3DGraphics"), "3DGraphics", "folder", (char**) &Graphics, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or Utility
    { N_("Accessibility"), "Accessibility", "folder", (char**) &SettingsorUtility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or Utility
    { N_("Accessibility"), "Accessibility", "folder", (char**) &SettingsorUtility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Accessories"), "Accessories", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("ActionGame"), "ActionGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Adult"), "Adult", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("AdventureGame"), "AdventureGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Amusement"), "Amusement", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("ArcadeGame"), "ArcadeGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Archiving"), "Archiving", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Art"), "Art", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ArtificialIntelligence"), "ArtificialIntelligence", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Astronomy"), "Astronomy", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Audio"), "Audio", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("AudioVideo"), "AudioVideo", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("AudioVideoEditing"), "AudioVideoEditing", "folder", (char**) &AudioorVideoorAudioVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Biology"), "Biology", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("BlocksGame"), "BlocksGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("BoardGame"), "BoardGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Building"), "Building", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Calculator"), "Calculator", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Calendar"), "Calendar", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("CardGame"), "CardGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Chart"), "Chart", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Chat"), "Chat", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Chemistry"), "Chemistry", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Clock"), "Clock", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility;Archiving
    { N_("Compression"), "Compression", "folder", (char**) &UtilityArchiving, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ComputerScience"), "ComputerScience", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Construction"), "Construction", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("ContactManagement"), "ContactManagement", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Core"), "Core", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("DataVisualization"), "DataVisualization", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Development or AudioVideo
    { N_("Database"), "Database", "folder", (char**) &OfficeorDevelopmentorAudioVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Debugger"), "Debugger", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("DesktopSettings"), "DesktopSettings", "folder", (char**) &Settings, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Development"), "Development", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Dialup"), "Dialup", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or TextTools
    { N_("Dictionary"), "Dictionary", "folder", (char**) &OfficeorTextTools, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo
    { N_("DiscBurning"), "DiscBurning", "folder", (char**) &AudioVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Documentation"), "Documentation", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Economy"), "Economy", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Editors"), "Editors", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Education"), "Education", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Electricity"), "Electricity", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Electronics"), "Electronics", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Network
    { N_("Email"), "Email", "folder", (char**) &OfficeorNetwork, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System or Game
    { N_("Emulator"), "Emulator", "folder", (char**) &SystemorGame, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Engineering"), "Engineering", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Feed"), "Feed", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System;FileTools
    { N_("FileManager"), "FileManager", "folder", (char**) &SystemFileTools, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility or System
    { N_("FileTools"), "FileTools", "folder", (char**) &UtilityorSystem, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("FileTransfer"), "FileTransfer", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System
    { N_("Filesystem"), "Filesystem", "folder", (char**) &System, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Finance"), "Finance", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("FlowChart"), "FlowChart", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("GUIDesigner"), "GUIDesigner", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Game"), "Game", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geography"), "Geography", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geology"), "Geology", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geoscience"), "Geoscience", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Graphics"), "Graphics", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network or Audio
    { N_("HamRadio"), "HamRadio", "folder", (char**) &NetworkorAudio, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("HardwareSettings"), "HardwareSettings", "folder", (char**) &Settings, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("History"), "History", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Humanities"), "Humanities", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("IDE"), "IDE", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("IRCClient"), "IRCClient", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ImageProcessing"), "ImageProcessing", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("InstantMessaging"), "InstantMessaging", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("KidsGame"), "KidsGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Languages"), "Languages", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Literature"), "Literature", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("LogicGame"), "LogicGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science or Utility
    { N_("Maps"), "Maps", "folder", (char**) &EducationorScienceorUtility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Math"), "Math", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("MedicalSoftware"), "MedicalSoftware", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Midi"), "Midi", "folder", (char**) &AudioVideoAudio, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Mixer"), "Mixer", "folder", (char**) &AudioVideoAudio, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System or Network
    { N_("Monitor"), "Monitor", "folder", (char**) &SystemorNetwork, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Motif"), "Motif", "folder", (char**) &ANY, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Multimedia"), "Multimedia", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo or Education
    { N_("Music"), "Music", "folder", (char**) &AudioVideoorEducation, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Network"), "Network", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("News"), "News", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education;Math or Science;Math
    { N_("NumericalAnalysis"), "NumericalAnalysis", "folder", (char**) &EducationMathorScienceMath, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;Scanning
    { N_("OCR"), "OCR", "folder", (char**) &GraphicsScanning, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Office"), "Office", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Other"), "Other", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("P2P"), "P2P", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("PDA"), "PDA", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("PackageManager"), "PackageManager", "folder", (char**) &Settings, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education;ComputerScience or Science;ComputerScience
    { N_("ParallelComputing"), "ParallelComputing", "folder", (char**) &EducationComputerScienceorScienceComputerScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Photography"), "Photography", "folder", (char**) &GraphicsorOffice, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Physics"), "Physics", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("Player"), "Player", "folder", (char**) &AudioorVideoorAudioVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Presentation"), "Presentation", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings;HardwareSettings
    { N_("Printing"), "Printing", "folder", (char**) &SettingsHardwareSettings, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Profiling"), "Profiling", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Development
    { N_("ProjectManagement"), "ProjectManagement", "folder", (char**) &OfficeorDevelopment, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Publishing"), "Publishing", "folder", (char**) &GraphicsorOffice, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;2DGraphics
    { N_("RasterGraphics"), "RasterGraphics", "folder", (char**) &Graphics2DGraphics, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("Recorder"), "Recorder", "folder", (char**) &AudioorVideoorAudioVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("RemoteAccess"), "RemoteAccess", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("RevisionControl"), "RevisionControl", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Robotics"), "Robotics", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("RolePlaying"), "RolePlaying", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("Scanning"), "Scanning", "folder", (char**) &Graphics, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Science"), "Science", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Screensavers"), "Screensavers", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or System
    { N_("Security"), "Security", "folder", (char**) &SettingsorSystem, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Sequencer"), "Sequencer", "folder", (char**) &AudioVideoAudio, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Settings"), "Settings", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("Shooter"), "Shooter", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("Simulation"), "Simulation", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science or Utility
    { N_("Spirituality"), "Spirituality", "folder", (char**) &EducationorScienceorUtility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Sports"), "Sports", "folder", (char**) &EducationorScience, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("SportsGame"), "SportsGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Spreadsheet"), "Spreadsheet", "folder", (char**) &Office, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("StrategyGame"), "StrategyGame", "folder", (char**) &Game, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("System"), "System", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Video
    { N_("TV"), "TV", "folder", (char**) &AudioVideoVideo, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Telephony"), "Telephony", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TelephonyTools"), "TelephonyTools", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System
    { N_("TerminalEmulator"), "TerminalEmulator", "folder", (char**) &System, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TextEditor"), "TextEditor", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TextTools"), "TextTools", "folder", (char**) &Utility, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Translation"), "Translation", "folder", (char**) &Development, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Tuner"), "Tuner", "folder", (char**) &AudioVideoAudio, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Utility"), "Utility", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;2DGraphics
    { N_("VectorGraphics"), "VectorGraphics", "folder", (char**) &Graphics2DGraphics, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Video"), "Video", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("VideoConference"), "VideoConference", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Viewer"), "Viewer", "folder", (char**) &GraphicsorOffice, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("WINE"), "WINE", "folder", nullptr, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("WebBrowser"), "WebBrowser", "folder", (char**) &Network, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network or Development
    { N_("WebDevelopment"), "WebDevelopment", "folder", (char**) &NetworkorDevelopment, 0, 0},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("WordProcessor"), "WordProcessor", "folder", (char**) &Office}
};
}
