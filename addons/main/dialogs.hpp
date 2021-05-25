/* ================================================================================ */

class RscPicture;
class RscText;
class RscEdit;
class RscCheckbox;
class RscButton;

/* ================================================================================ */

class RscTitles
{
	class ClipOverlay
	{
		idd = 42000;
		duration = 1e+011;
		onLoad = "uiNamespace setVariable ['ClipOverlay',_this select 0]";
		fadeIn = 0;
		fadeOut = 0;
		class Controls
		{
			class RscPicture_2001: RscPicture
			{
				// TOP LEFT IMAGE
				idc = 2001;
				style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
				text = "\z\grad_clipOverlay\addons\main\images\grad_logo_512x512.paa";
				x = -27.5 * GUI_GRID_W + GUI_GRID_X;
				y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 12 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
			};
			class RscPicture_2002: RscPicture
			{
				// TOP RIGHT IMAGE
				idc = 2002;
				style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
				text = "\z\grad_clipOverlay\addons\main\images\grad_logo_512x512.paa";
				x = 55.5 * GUI_GRID_W + GUI_GRID_X;
				y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 12 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
			};
			class RscPicture_2003: RscPicture
			{
				// BOTTOM LEFT IMAGE
				idc = 2003;
				style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
				text = "\z\grad_clipOverlay\addons\main\images\grad_logo_512x512.paa";
				x = -27.5 * GUI_GRID_W + GUI_GRID_X;
				y = 25.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 12 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
			};
			class RscPicture_2004: RscPicture
			{
				// BOTTOM RIGHT IMAGE
				idc = 2004;
				style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
				text = "\z\grad_clipOverlay\addons\main\images\grad_logo_512x512.paa";
				x = 55.5 * GUI_GRID_W + GUI_GRID_X;
				y = 25.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 12 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
			};
			class RscText_2101: RscText
			{
				//TOP TEXT BACKGROUND
				idc = 2101;
				x = -15 * GUI_GRID_W + GUI_GRID_X;
				y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 70 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
				colorBackground[] = {0,0,0,0.25};
			};
			class RscText_2102: RscText
			{
				//BOTTOM TEXT BACKGROUND
				idc = 2102;
				x = -15 * GUI_GRID_W + GUI_GRID_X;
				y = 25.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 70 * GUI_GRID_W;
				h = 9 * GUI_GRID_H;
				colorBackground[] = {0,0,0,0.25};
			};
			class RscText_2201: RscText
			{
				// TOP HEADLINE
				idc = 2201;
				text = "HEADLINE - Additional Text | v1.2.345 (2020-11-24)";
				x = -14 * GUI_GRID_W + GUI_GRID_X;
				y = -9 * GUI_GRID_H + GUI_GRID_Y;
				w = 68 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
				sizeEx = 3 * GUI_GRID_H;
				colorText[] = {0.8196,0.5647,0.12157,1};
			};
			class RscText_2202: RscText
			{
				// BOTTOM HEADLINE
				idc = 2202;
				text = "HEADLINE - Additional Text | v1.2.345 (2020-11-24)";
				x = -14 * GUI_GRID_W + GUI_GRID_X;
				y = 26 * GUI_GRID_H + GUI_GRID_Y;
				w = 68 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
				sizeEx = 3 * GUI_GRID_H;
				colorText[] = {0.8196,0.5647,0.12157,1};
			};
			class RscText_2301: RscText
			{
				//TOP SUBHEADLINE TEXT
				idc = 2301;
				style = ST_MULTI + ST_NO_RECT;
				text = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";
				x = -14 * GUI_GRID_W + GUI_GRID_X;
				y = -6.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 68 * GUI_GRID_W;
				h = 5 * GUI_GRID_H;
				sizeEx = 2 * GUI_GRID_H;
				lineSpacing = 0.75;
			};
			class RscText_2302: RscText
			{
				//BOTTOM SUBHEADLINE TEXT
				idc = 2302;
				style = ST_MULTI + ST_NO_RECT;
				text = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";
				x = -14 * GUI_GRID_W + GUI_GRID_X;
				y = 28.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 68 * GUI_GRID_W;
				h = 5 * GUI_GRID_H;
				sizeEx = 2 * GUI_GRID_H;
				lineSpacing = 0.75;
			};
		};
	};
};

/* ================================================================================ */

class ClipOverlayConfig
{
	idd = 43000;
	access = 0;
	movingEnable = false;
	enableSimulation = true;
	class Controls
	{
		class RscText_4001: RscText
		{
			//BACKGROUND
			idc = 4001;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.25};
		};
		class RscText_4101: RscText
		{
			//TITLE
			idc = 4101;
			text = "GRUPPE ADLER CLIP OVERLAY v0.1";
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};
		};
		class RscEdit_4201: RscEdit
		{
			//HEADLINE EDIT BOX
			idc = 4201;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 32 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,0.5};
		};
		class RscEdit_4202: RscEdit
		{
			//SUBHEADLINE EDIT BOX
			idc = 4202;
			style = ST_MULTI + ST_NO_RECT;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 32 * GUI_GRID_W;
			h = 4.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,0.5};
			linespacing = 1;
		};
		class RscEdit_4203: RscEdit
		{
			//IMAGE PATH EDIT BOX
			idc = 4203;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 32 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,0.5};

			tooltip = "Simply use filename of an image, if the file is directly in mission folder. Or use subfolder\file if the file resists in an subfolder.\nFiles in mod folders use filepaths like '\z\grad_clipOverlay\addons\main\images\grad_clipOverlay_logo_512x512.paa'";
		};
		class RscText_4301: RscText
		{
			idc = 4301;
			text = "Headline";
			style = ST_RIGHT;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class RscText_4302: RscText
		{
			idc = 4302;
			text = "Subheadline";
			style = ST_RIGHT;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4303: RscText
		{
			idc = 4303;
			text = "Image Position";
			style = ST_RIGHT;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4304: RscText
		{
			idc = 4304;
			text = "Image Path";
			style = ST_RIGHT;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4305: RscText
		{
			idc = 4305;
			text = "Top Left";
			style = ST_RIGHT;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4306: RscText
		{
			idc = 4306;
			text = "Top Right";
			style = ST_RIGHT;
			x = 15.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4307: RscText
		{
			idc = 4307;
			text = "Bottom Left";
			style = ST_RIGHT;
			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4308: RscText
		{
			idc = 4308;
			text = "Bottom Right";
			style = ST_RIGHT;
			x = 31.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4309: RscText
		{
			idc = 4309;
			text = "Text Position";
			style = ST_RIGHT;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4310: RscText
		{
			idc = 4310;
			text = "Top";
			style = ST_RIGHT;
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscText_4311: RscText
		{
			idc = 4311;
			text = "Bottom";
			style = ST_RIGHT;
			x = 15.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4401: RscCheckbox
		{
			idc = 4401;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4402: RscCheckbox
		{
			idc = 4402;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4403: RscCheckbox
		{
			idc = 4403;
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4404: RscCheckbox
		{
			idc = 4404;
			x = 37.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4405: RscCheckbox
		{
			idc = 4405;
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscCheckbox_4406: RscCheckbox
		{
			idc = 4406;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscButton_4501: RscButton
		{
			idc = 4501;
			text = "OK";
			x = 35 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "[] call GRAD_fnc_previewClipOverlaySettings; [] call GRAD_fnc_saveClipOverlaySettings; closeDialog 1;";
		};
		class RscButton_4502: RscButton
		{
			idc = 4502;
			text = "Preview";
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "[] call GRAD_fnc_previewClipOverlaySettings;";
		};
		class RscButton_4503: RscButton
		{
			idc = 4503;
			text = "Cancel";
			x = 24 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "[] call GRAD_fnc_toggleClipOverlay; [] call GRAD_fnc_toggleClipOverlay; closeDialog 1;";
		};
		class RscButton_4504: RscButton
		{
			idc = 4504;
			text = "Defaults";
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "[[] call GRAD_FNC_defaultClipOverlaySettings] call GRAD_fnc_applySettingsToClipOverlayDialog;";
		};
		class RscButton_4505: RscButton
		{
			idc = 4505;
			text = "GRAD Watermark White";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "['\z\grad_clipOverlay\addons\main\images\grad_watermark_512x512_white.paa'] call GRAD_fnc_setClipOverlayDialogImagePath;";
		};
		class RscButton_4506: RscButton
		{
			idc = 4506;
			text = "GRAD Watermark Black";
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "['\z\grad_clipOverlay\addons\main\images\grad_watermark_512x512_black.paa'] call GRAD_fnc_setClipOverlayDialogImagePath;";
		};
		class RscButton_4507: RscButton
		{
			idc = 4507;
			text = "Gruppe Adler Logo";
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "['\z\grad_clipOverlay\addons\main\images\grad_logo_512x512.paa'] call GRAD_fnc_setClipOverlayDialogImagePath;";
		};
		class RscButton_4508: RscButton
		{
			idc = 4508;
			text = "GRAD clipOverlay Logo";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "['\z\grad_clipOverlay\addons\main\images\grad_clipOverlay_logo_512x512.paa'] call GRAD_fnc_setClipOverlayDialogImagePath;";
		};
		class RscButton_4509: RscButton
		{
			idc = 4509;
			text = "Dummy";
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.8196,0.5647,0.12157,1};

			action = "['\z\grad_clipOverlay\addons\main\images\dummy_512x512.paa'] call GRAD_fnc_setClipOverlayDialogImagePath;";
		};
	};
};

/* ================================================================================ */