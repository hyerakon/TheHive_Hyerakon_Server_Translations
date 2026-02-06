class CfgPatches
{
    class TheHive_Server_Translations_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DayZExpansion_Quest_Scripts"
        };
    };
};

class CfgMods
{
	class TheHive_Server_Translations
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Server Translations - Hyerakon";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_Hyerakon_Server_Translations/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Hyerakon_Server_Translations/Scripts/4_World"};
			};
            class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_Hyerakon_Server_Translations/Scripts/5_Mission"};
			};
		};
	};
};