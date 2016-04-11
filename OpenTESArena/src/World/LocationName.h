#ifndef LOCATION_NAME_H
#define LOCATION_NAME_H

// A unique identifer for every static location (city-state, town, village, main quest) 
// on the Tamriel map. 

// These should all be loaded from a text file eventually.

// Thanks to the UESPWiki/Arena:Places webpage for this existing list. Random dungeons 
// should be kept track of in a dynamic container. Riverbridge and Glenpoint are the only 
// two duplicates, and they both occur a total of two times each.

enum class LocationName
{	
	// Black Marsh.
	AltenCorimont,
	AltenMarkmont,
	AltenMeirhall,
	Archon,
	Blackrose,
	Branchgrove,
	Branchmont,
	Chasecreek,
	Chasepoint,
	Gideon,
	Glenbridge,
	Greenglade,
	Greenspring,
	Helstrom,
	Lilmoth,
	Longmont,
	Moonmarch,
	PortdunMont,
	Riverbridge,
	Riverwalk,
	Rockgrove,
	Rockguard,
	Rockpark,
	Rockpoint,
	Rockspring,
	Seafalls,
	Seaspring,
	Soulrest,
	Stonewastes,
	Stormhold,
	TenmarWall,
	Thorn,

	// Elsweyr.
	Alabaster,
	BlackHeights,
	BrukreichBridge,
	Chasegrove,
	Chasemoor,
	CoriDarglade,
	Corinthe, // misspelled as "Corinth".
	DarkarnPlace,
	DarvulkHaven,
	DuncoriWalk,
	Dune,
	EinMeirvale,
	Greenhall,
	HeimthorMount,
	HelkarnLand,
	KingsWalk,
	MarkgranBrook,
	MeirLynmount,
	NeumarWalk,
	Orcrest,
	PortneuView,
	Rimmen,
	Riverhold,
	RiverKeep,
	Seaplace,
	Senchal,
	SouthGuard,
	TardornWood,
	TenmarForest,
	Torval,
	ValleyGuard,
	VerkarthHills,

	// Hammerfell.
	BelkarthGuard,
	Chaseguard,
	Chasetown,
	CliffKeep,
	CortenMont,
	DragonGate,
	DragonGrove,
	Dragonstar,
	Elinhir,
	Gilane,
	Hegathe,
	HeldornMount,
	KarnverFalls,
	LainebonPlace,
	Lainlyn,
	NimbelMoor,
	NorthHall,
	Rihad,
	Riverpoint,
	Riverview,
	Roseguard,
	Sentinel,
	Shadymarch,
	Skaven,
	Stonedale,
	Stonemoor,
	Sunkeep,
	Taneth,
	ThorstadPlace,
	VerkarthCity,
	VulkneuTown,
	VulnimGate,

	// High Rock.
	BlackWastes,
	Camlorn,
	CloudSpring,
	Daggerfall,
	DunkarnHaven,
	DunlainFalls,
	EagleBrook,
	EbonWastes,
	Evermore,
	Farrun,
	Glenpoint,
	IlessenHills,
	Jehanna,
	KarthgranVale,
	KingsGuard,
	MarkwastenMoor,
	MeirDarguard,
	MeirThorvale,
	Moonguard,
	NormarHeights,
	NorthPoint,
	NorvulkHills,
	OldGate,
	PortdunCreek,
	RavenSpring,
	ReichGradkeep,
	Shornhelm,
	ThorkanPark,
	VermeirWastes,
	Wayrest,
	WhiteHaven,
	WindKeep,

	// Imperial Province.
	ImperialCity,

	// Morrowind.
	AmberForest,
	Blacklight,
	CorkarthRun,
	CormarView,
	DarnimWatch,
	DragonGlade,
	EagleMoor,
	Ebonheart,
	Firewatch,
	GlenHaven,
	Greenheights,
	HeimlynKeep,
	HelnimWall,
	KarththorDale,
	KarththorHeights,
	Kragenmoor,
	MarkgranForest,
	Mournhold,
	Narsis,
	Necrom,
	Oaktown,
	OldKeep,
	OldRun,
	ReichParkeep,
	Riverbridge2,
	SailenVulgate,
	SilgradTower,
	SilnimDale,
	Stonefalls,
	Stoneforest,
	Tear,
	VerarchenHall,

	// Skyrim.
	AmberGuard,
	Amol,
	BlackMoor,
	Dawnstar,
	DragonBridge,
	DragonWood,
	DunparWall,
	DunstadGrove,
	Falcrenth,
	Granitehall,
	Greenwall,
	HelarchenCreek,
	KarthwastenHall,
	Lainalten,
	LaintarDale,
	MarkarthSide,
	NeugradWatch,
	NimaltenCity,
	NorthKeep,
	Oakwood,
	PargranVillage,
	ReichCorigate,
	Riften,
	Riverwood,
	Snowhawk,
	Solitude,
	Stonehills,
	Sunguard,
	VernimWood,
	Whiterun,
	Windhelm,
	Winterhold,

	// Summerset Isle.
	Alinor,
	ArchenGrangrove,
	BelportRun,
	Cloudrest,
	CorgradWastes,
	Dusk,
	EbonStadmont,
	FirstHold, // misspelled as "Firsthold".
	Glenview,
	GraddunSpring,
	HollyFalls,
	KarndarWatch,
	KarnwastenMoor,
	KingsHaven,
	Lillandril,
	MarbrukBrook,
	MarnorKeep,
	OldFalls,
	Riverfield,
	Riverwatch,
	Rosefield,
	SeaKeep,
	Shimmerene,
	SilsailenPoint,
	SilverWood,
	Skywatch,
	Sunhold,
	ThorheimGuard,
	VulkhelGuard,
	WastenCoridale,
	WestGuard,
	WhiteGuard,

	// Valenwood.
	ArchenCormount,
	Arenthia,
	BlackPark,
	CoriSilmoor,
	CormeirSpring,
	EagleVale,
	EbonRo,
	Eldenroot,
	EmperorsRun,
	Falinesti,
	Glenpoint2,
	GreenHall,
	Greenheart,
	Haven,
	HeimdarCity,
	KarthdarSquare,
	Longhaven,
	Longvale,
	LynpanMarch, // misspelled as "Lynpar March"
	MarbrukField,
	MeadowRun,
	Moonmont,
	Silvenar,
	Southpoint,
	StoneFell,
	Stonesquare,
	TarlainHeights,
	ThormarKeep,
	VulkwastenWood,
	VullainHaven,
	WastenBrukbrook,
	Woodhearth,

	// Main quest.
	BlackGate,
	CryptOfHearts,
	CrystalTower,
	DagothUr,
	EldenGrove,
	FangLair,
	FortressOfIce,
	ImperialDungeons, // Start game.
	ImperialPalace, // End game.
	Labyrinthian,
	MinesOfKhuras,
	Murkwood,
	SelenesWeb,
	Stonekeep,
	TempleOfAgamanus,
	TempleOfMadGod,
	HallsOfColossus,
	VaultsOfGemin
};

#endif
