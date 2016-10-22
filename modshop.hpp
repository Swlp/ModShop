
class modshop {
    idd = 9867;
    name = "modshop";
    onLoad = "client_modshopcamera  = ""CAMERA"" camCreate (getPos player); showCinemaBorder true; client_modshopcamera cameraEffect [""EXTERNAL"", ""BACK""];";
    onunload = "client_modshopcamera cameraEffect [""TERMINATE"",""BACK""]; camDestroy client_modshopcamera;";
    movingEnable = 0;
    enableSimulation = 1;

    class controls {

     
      class modshop_paintjob_background: RscPicture
      {
        idc = 1205;
        text = "#(argb,8,8,3)color(0,0,0,0.7)";
        x = 0.133906 * safezoneW + safezoneX;
        y = 0.214 * safezoneH + safezoneY;
        w = 0.159844 * safezoneW;
        h = 0.297 * safezoneH;
      };

      class modshop_paintselection: RscPicture
      {
      	idc = 1200;
      	text = "pictures\PaintJobs.paa";
      	x = 0.133906 * safezoneW + safezoneX;
      	y = 0.181 * safezoneH + safezoneY;
      	w = 0.159844 * safezoneW;
      	h = 0.308 * safezoneH;
      };

      class modshop_color_background: RscPicture
      {
      	idc = 1207;
      	text = "#(argb,8,8,3)color(0,0,0,0.7)";
      	x = 0.70625 * safezoneW + safezoneX;
      	y = 0.214 * safezoneH + safezoneY;
      	w = 0.159844 * safezoneW;
      	h = 0.275 * safezoneH;
      };

      class modshop_paintjobs: RscPicture
      {
      	idc = 1201;
      	text = "pictures\Paintlist.paa";
      	x = 0.70625 * safezoneW + safezoneX;
      	y = 0.181 * safezoneH + safezoneY;
      	w = 0.159844 * safezoneW;
      	h = 0.308 * safezoneH;
      };

      class modshop_license_background: RscPicture
      {
        idc = 1209;
        text = "#(argb,8,8,3)color(0,0,0,0.6)";
        x = 0.298906 * safezoneW + safezoneX;
        y = 0.764 * safezoneH + safezoneY;
        w = 0.216563 * safezoneW;
        h = 0.066 * safezoneH;
      };

      class modshop_license: RscPicture
      {
      	idc = 1202;
      	text = "pictures\LicensePlate.paa";
      	x = 0.298906 * safezoneW + safezoneX;
      	y = 0.764 * safezoneH + safezoneY;
      	w = 0.216563 * safezoneW;
      	h = 0.055 * safezoneH;
      };

      class LicenseEntry: RscEdit
      {
        idc = 9993;
        text = "1234567"; //--- ToDo: Localize;
        x = 0.304062 * safezoneW + safezoneX;
        y = 0.797 * safezoneH + safezoneY;
        w = 0.0867957 * safezoneW;
        h = 0.0231906 * safezoneH;
      };

      class PurchaseOption: RscButton
      {
        idc = 1600;
        onButtonClick = "[] spawn client_fnc_processPlates";
        text = "Confirm"; //--- ToDo: Localize;
        x = 0.422656 * safezoneW + safezoneX;
        y = 0.797 * safezoneH + safezoneY;
        w = 0.0878543 * safezoneW;
        h = 0.0229999 * safezoneH;
      };

      class modshop_checkout_background: RscPicture
      {
        idc = 1208;
        text = "#(argb,8,8,3)color(0,0,0,0.6)";
        x = 0.556719 * safezoneW + safezoneX;
        y = 0.764 * safezoneH + safezoneY;
        w = 0.139219 * safezoneW;
        h = 0.066 * safezoneH;
      };

      class modshop_checkout: RscPicture
      {
      	idc = 1203;
      	text = "pictures\Checkout.paa";
      	x = 0.556719 * safezoneW + safezoneX;
      	y = 0.764 * safezoneH + safezoneY;
      	w = 0.139219 * safezoneW;
      	h = 0.055 * safezoneH;
      };

      class modshop_mod_background: RscPicture
      {
      	idc = 1206;
      	text = "#(argb,8,8,3)color(0,0,0,0.7)";
      	x = 0.133906 * safezoneW + safezoneX;
      	y = 0.544 * safezoneH + safezoneY;
      	w = 0.159844 * safezoneW;
      	h = 0.286 * safezoneH;
      };

      class modshop_upgradecar: RscButton
      {
        idc = 1602;
        onButtonClick = "[] spawn client_fnc_carupdate";
        text = "Upgrade"; //--- ToDo: Localize;
        x = 0.139062 * safezoneW + safezoneX;
        y = 0.61 * safezoneH + safezoneY;
        w = 0.0928125 * safezoneW;
        h = 0.033 * safezoneH;
      };

      class modshop_mod: RscPicture
      {
      	idc = 1204;
      	text = "pictures\VehicleMod.paa";
      	x = 0.133906 * safezoneW + safezoneX;
      	y = 0.511 * safezoneH + safezoneY;
      	w = 0.159844 * safezoneW;
      	h = 0.308 * safezoneH;
      };

      class modshop_checkout_button: RscButton
      {
        idc = 1601;
        text = "Purchase"; //--- ToDo: Localize;
        action = "closeDialog 0";
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
        x = 0.639219 * safezoneW + safezoneX;
        y = 0.797 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
      };

      class modshop_wheelcolor_change: RscButton
      {
        idc = 1603;
        onButtonClick = "";
        text = "Change"; //--- ToDo: Localize;
        x = 0.139062 * safezoneW + safezoneX;
        y = 0.269 * safezoneH + safezoneY;
        w = 0.0928125 * safezoneW;
        h = 0.033 * safezoneH;
      };

      class modshop_tint_change: RscButton
      {
        idc = 1604;
        onButtonClick = "";
        text = "Change"; //--- ToDo: Localize;
        x = 0.139062 * safezoneW + safezoneX;
        y = 0.346 * safezoneH + safezoneY;
        w = 0.0928125 * safezoneW;
        h = 0.033 * safezoneH;
      };

      class modshop_body_change: RscButton
     {
       idc = 1605;
       onButtonClick = "";
       text = "Change"; //--- ToDo: Localize;
       x = 0.139062 * safezoneW + safezoneX;
       y = 0.423 * safezoneH + safezoneY;
       w = 0.0928125 * safezoneW;
       h = 0.033 * safezoneH;
     };

     class modshop_paintlist_1: RscListbox
     {
       idc = 1506;
       x = 0.716562 * safezoneW + safezoneX;
       y = 0.225 * safezoneH + safezoneY;
       w = 0.139219 * safezoneW;
       h = 0.253 * safezoneH;
     };
   }
}
