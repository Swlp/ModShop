
class modshop {
    idd = 9867;
    name = "modshop";
    onload = "";
    onunload = "";
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
        text = "Checkout?"; //--- ToDo: Localize;
        action = "closeDialog 0";
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
        x = 0.639219 * safezoneW + safezoneX;
        y = 0.797 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
      };

      class modshop_wheels: RscListbox
      {
      	idc = 1500;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.144219 * safezoneW + safezoneX;
      	y = 0.269 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_tint: RscListbox
      {
      	idc = 1501;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.144219 * safezoneW + safezoneX;
      	y = 0.357 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_body: RscListbox
      {
      	idc = 1502;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.144219 * safezoneW + safezoneX;
      	y = 0.434 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_engine: RscListbox
      {
      	idc = 1503;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.139062 * safezoneW + safezoneX;
      	y = 0.599 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_transmission: RscListbox
      {
      	idc = 1504;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.139062 * safezoneW + safezoneX;
      	y = 0.687 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_turbo: RscListbox
      {
      	idc = 1505;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.139062 * safezoneW + safezoneX;
      	y = 0.775 * safezoneH + safezoneY;
      	w = 0.0721875 * safezoneW;
      	h = 0.022 * safezoneH;
        onLBSelChanged =
      };


      class modshop_paintlist: RscListbox
      {
      	idc = 1506;
        colorBackground[] = {0,0,0,0.6};
        colorActive[] = {0,0,0,0.6};
      	x = 0.711406 * safezoneW + safezoneX;
      	y = 0.225 * safezoneH + safezoneY;
      	w = 0.0876563 * safezoneW;
      	h = 0.242 * safezoneH;
        onLBSelChanged  =


      };

    }
}
