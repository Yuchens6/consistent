#include "main.h"
#include "imported_functions.h"

/* module specific includes */
#include "layer_1.h"

void symbology_layer_1_draw(type_symbology_layer_1* pContext)
{
    double height = 400.000000;
    double width = 400.000000;
    Point origin = {0,0};
    Point pre_origin = {0,0};
    Point offset_origin = {0,0};
    sgpi_translate(NULL, -1, 1, 0);
    sgpi_scale(NULL, 1, -1, 1);
    // === GCG generate sgpi code Start ===
   /* Object _16b99afad3314a9daf31776e983c8528, Name:group, Type: combineContainer*/
    pre_origin = origin;
    origin =  cal_origin((Point){117.00 / width, 54.00 / height}, 200.00 / width, 250.00 / height);
    Point offset_origin_16b99afad3314a9daf31776e983c8528 = relative_point(origin, pre_origin);
    offset_origin_16b99afad3314a9daf31776e983c8528 = add_point(offset_origin_16b99afad3314a9daf31776e983c8528, (Point){0 / width, 0 / height});
    sgpi_translate(NULL, offset_origin_16b99afad3314a9daf31776e983c8528.x, offset_origin_16b99afad3314a9daf31776e983c8528.y, 0);
    sgpi_scale(NULL, 1, 1, 0);
    sgpi_rotate(NULL, 0.0, 0, 0, 1);
	switch (-1) {
		case -1:
		/* NoDisplay */
          break;
		case 1:{
			/* Object _db65b6845c6c4216852a1cbdc14d3775, Name:circle, Type: circle*/
			SGPI_Circle input_db65b6845c6c4216852a1cbdc14d3775;
			input_db65b6845c6c4216852a1cbdc14d3775 = sgpi_circle_initial(input_db65b6845c6c4216852a1cbdc14d3775);
			Point point_db65b6845c6c4216852a1cbdc14d3775 = relative_point((Point){221/width,229/height}, origin);
			input_db65b6845c6c4216852a1cbdc14d3775.center = point_db65b6845c6c4216852a1cbdc14d3775;
			input_db65b6845c6c4216852a1cbdc14d3775.radius = 75.00/width;
			PropertyArc appearance_db65b6845c6c4216852a1cbdc14d3775;
			appearance_db65b6845c6c4216852a1cbdc14d3775 = sgpi_propertyArc_initial(appearance_db65b6845c6c4216852a1cbdc14d3775);
			appearance_db65b6845c6c4216852a1cbdc14d3775.lineWidth = 0;
			appearance_db65b6845c6c4216852a1cbdc14d3775.lineStipple = 0;
			appearance_db65b6845c6c4216852a1cbdc14d3775.lineCap = "round";
			appearance_db65b6845c6c4216852a1cbdc14d3775.haloing = true;
			appearance_db65b6845c6c4216852a1cbdc14d3775.haloColor = -1;
			appearance_db65b6845c6c4216852a1cbdc14d3775.outlineColor = 2;
			appearance_db65b6845c6c4216852a1cbdc14d3775.outlineOpacity = 255;
			appearance_db65b6845c6c4216852a1cbdc14d3775.fillColor = -1;
			appearance_db65b6845c6c4216852a1cbdc14d3775.fillOpacity = 255;
			appearance_db65b6845c6c4216852a1cbdc14d3775.polygonSmooth = true;
			Texture texture_db65b6845c6c4216852a1cbdc14d3775;
			texture_db65b6845c6c4216852a1cbdc14d3775.horizAlign = "center";
			texture_db65b6845c6c4216852a1cbdc14d3775.horizPattern = 1.0;
			texture_db65b6845c6c4216852a1cbdc14d3775.vertAlign = "middle";
			texture_db65b6845c6c4216852a1cbdc14d3775.vertPattern = 1.0;
			texture_db65b6845c6c4216852a1cbdc14d3775.id = -1;
			appearance_db65b6845c6c4216852a1cbdc14d3775.texture = texture_db65b6845c6c4216852a1cbdc14d3775;
			appearance_db65b6845c6c4216852a1cbdc14d3775.modulate = false;
			sgpi_circle(NULL, input_db65b6845c6c4216852a1cbdc14d3775, appearance_db65b6845c6c4216852a1cbdc14d3775);
			}
			break;
		default:{
			/* case 0 */
		   /* Object _65581f85efb54558a23a85615811a796, Name:rectangle, Type: rectangle*/
			SGPI_Rectangle input_65581f85efb54558a23a85615811a796;
			input_65581f85efb54558a23a85615811a796 = sgpi_rectangle_initial(input_65581f85efb54558a23a85615811a796);
			Point firstPoint_65581f85efb54558a23a85615811a796 = relative_point((Point){117/width,54/height}, origin);
			input_65581f85efb54558a23a85615811a796.firstPoint = firstPoint_65581f85efb54558a23a85615811a796;
			Point thirdPoint_65581f85efb54558a23a85615811a796 = relative_point((Point){317/width,154/height}, origin);
			input_65581f85efb54558a23a85615811a796.thirdPoint = thirdPoint_65581f85efb54558a23a85615811a796;
			double angle_65581f85efb54558a23a85615811a796[] = {0.0,0.0,0.0,0.0};
			input_65581f85efb54558a23a85615811a796.angle = angle_65581f85efb54558a23a85615811a796;
			bool clockwise_65581f85efb54558a23a85615811a796[] = {false,false,false,false};
			input_65581f85efb54558a23a85615811a796.clockwise = clockwise_65581f85efb54558a23a85615811a796;
			PropertyPolygon appearance_65581f85efb54558a23a85615811a796;
			appearance_65581f85efb54558a23a85615811a796 = sgpi_propertyPolygon_initial(appearance_65581f85efb54558a23a85615811a796);
			appearance_65581f85efb54558a23a85615811a796.lineStipple = 0;
			appearance_65581f85efb54558a23a85615811a796.lineCap = "round";
			appearance_65581f85efb54558a23a85615811a796.haloing = true;
			appearance_65581f85efb54558a23a85615811a796.haloColor = -1;
			appearance_65581f85efb54558a23a85615811a796.outlineColor = 2;
			appearance_65581f85efb54558a23a85615811a796.outlineOpacity = 255;
			appearance_65581f85efb54558a23a85615811a796.fillColor = -1;
			appearance_65581f85efb54558a23a85615811a796.fillOpacity = 255;
			appearance_65581f85efb54558a23a85615811a796.polygonSmooth = true;
			Texture texture_65581f85efb54558a23a85615811a796;
			texture_65581f85efb54558a23a85615811a796.horizAlign = "center";
			texture_65581f85efb54558a23a85615811a796.horizPattern = 1.0;
			texture_65581f85efb54558a23a85615811a796.vertAlign = "middle";
			texture_65581f85efb54558a23a85615811a796.vertPattern = 1.0;
			texture_65581f85efb54558a23a85615811a796.id = -1;
			appearance_65581f85efb54558a23a85615811a796.texture = texture_65581f85efb54558a23a85615811a796;
			appearance_65581f85efb54558a23a85615811a796.modulate = false;
			appearance_65581f85efb54558a23a85615811a796.tessellate = false;
			appearance_65581f85efb54558a23a85615811a796.lineWidth = 0;
			sgpi_rectangle(NULL, input_65581f85efb54558a23a85615811a796, appearance_65581f85efb54558a23a85615811a796);
			}
			break;
	}
	sgpi_rotate(NULL,cal_negation(0.0) , 0, 0, 1);
	sgpi_scale(NULL, 1 / 1, 1 / 1, 0);
	sgpi_translate(NULL, cal_negation(offset_origin_16b99afad3314a9daf31776e983c8528.x), cal_negation(offset_origin_16b99afad3314a9daf31776e983c8528.y) ,0);
	origin = relative_point(origin, offset_origin_16b99afad3314a9daf31776e983c8528);
	origin = add_point(origin, (Point){0 / width, 0 / height});

    /*  === group End === */
   /* Object _2bc184409d8546eab64ed117b2a45382, Name:group, Type: combineContainer*/
    pre_origin = origin;
    origin =  cal_origin((Point){465.00 / width, 48.00 / height}, 201.00 / width, 252.00 / height);
    Point offset_origin_2bc184409d8546eab64ed117b2a45382 = relative_point(origin, pre_origin);
    offset_origin_2bc184409d8546eab64ed117b2a45382 = add_point(offset_origin_2bc184409d8546eab64ed117b2a45382, (Point){0 / width, 0 / height});
    sgpi_translate(NULL, offset_origin_2bc184409d8546eab64ed117b2a45382.x, offset_origin_2bc184409d8546eab64ed117b2a45382.y, 0);
    sgpi_scale(NULL, 1, 1, 0);
    sgpi_rotate(NULL, 0.0, 0, 0, 1);
	switch (-2147483647) {
		case -1:
		/* NoDisplay */
          break;
		case 0:{
		   /* Object _ff351f76be2e4e1da63971016600cb81, Name:rectangle, Type: rectangle*/
			SGPI_Rectangle input_ff351f76be2e4e1da63971016600cb81;
			input_ff351f76be2e4e1da63971016600cb81 = sgpi_rectangle_initial(input_ff351f76be2e4e1da63971016600cb81);
			Point firstPoint_ff351f76be2e4e1da63971016600cb81 = relative_point((Point){466/width,48/height}, origin);
			input_ff351f76be2e4e1da63971016600cb81.firstPoint = firstPoint_ff351f76be2e4e1da63971016600cb81;
			Point thirdPoint_ff351f76be2e4e1da63971016600cb81 = relative_point((Point){666/width,148/height}, origin);
			input_ff351f76be2e4e1da63971016600cb81.thirdPoint = thirdPoint_ff351f76be2e4e1da63971016600cb81;
			double angle_ff351f76be2e4e1da63971016600cb81[] = {0.0,0.0,0.0,0.0};
			input_ff351f76be2e4e1da63971016600cb81.angle = angle_ff351f76be2e4e1da63971016600cb81;
			bool clockwise_ff351f76be2e4e1da63971016600cb81[] = {false,false,false,false};
			input_ff351f76be2e4e1da63971016600cb81.clockwise = clockwise_ff351f76be2e4e1da63971016600cb81;
			PropertyPolygon appearance_ff351f76be2e4e1da63971016600cb81;
			appearance_ff351f76be2e4e1da63971016600cb81 = sgpi_propertyPolygon_initial(appearance_ff351f76be2e4e1da63971016600cb81);
			appearance_ff351f76be2e4e1da63971016600cb81.lineStipple = 0;
			appearance_ff351f76be2e4e1da63971016600cb81.lineCap = "round";
			appearance_ff351f76be2e4e1da63971016600cb81.haloing = true;
			appearance_ff351f76be2e4e1da63971016600cb81.haloColor = -1;
			appearance_ff351f76be2e4e1da63971016600cb81.outlineColor = 2;
			appearance_ff351f76be2e4e1da63971016600cb81.outlineOpacity = 255;
			appearance_ff351f76be2e4e1da63971016600cb81.fillColor = -1;
			appearance_ff351f76be2e4e1da63971016600cb81.fillOpacity = 255;
			appearance_ff351f76be2e4e1da63971016600cb81.polygonSmooth = true;
			Texture texture_ff351f76be2e4e1da63971016600cb81;
			texture_ff351f76be2e4e1da63971016600cb81.horizAlign = "center";
			texture_ff351f76be2e4e1da63971016600cb81.horizPattern = 1.0;
			texture_ff351f76be2e4e1da63971016600cb81.vertAlign = "middle";
			texture_ff351f76be2e4e1da63971016600cb81.vertPattern = 1.0;
			texture_ff351f76be2e4e1da63971016600cb81.id = -1;
			appearance_ff351f76be2e4e1da63971016600cb81.texture = texture_ff351f76be2e4e1da63971016600cb81;
			appearance_ff351f76be2e4e1da63971016600cb81.modulate = false;
			appearance_ff351f76be2e4e1da63971016600cb81.tessellate = false;
			appearance_ff351f76be2e4e1da63971016600cb81.lineWidth = 0;
			sgpi_rectangle(NULL, input_ff351f76be2e4e1da63971016600cb81, appearance_ff351f76be2e4e1da63971016600cb81);
			}
			break;
		case 1:{
		   /* Object _4ea63b40e5e047d78dc6a318e1589c00, Name:ellipse, Type: Ellipse*/
			SGPI_Ellipse input_4ea63b40e5e047d78dc6a318e1589c00;
			input_4ea63b40e5e047d78dc6a318e1589c00 = sgpi_ellipse_initial(input_4ea63b40e5e047d78dc6a318e1589c00);
			Point point_4ea63b40e5e047d78dc6a318e1589c00 = relative_point((Point){565/width,225/height}, origin);
			input_4ea63b40e5e047d78dc6a318e1589c00.center = point_4ea63b40e5e047d78dc6a318e1589c00;
			input_4ea63b40e5e047d78dc6a318e1589c00.horizontalRadius = 100.00/height;
			input_4ea63b40e5e047d78dc6a318e1589c00.verticalRadius = 75.00/width;
			PropertyArc appearance_4ea63b40e5e047d78dc6a318e1589c00;
			appearance_4ea63b40e5e047d78dc6a318e1589c00 = sgpi_propertyArc_initial(appearance_4ea63b40e5e047d78dc6a318e1589c00);
			appearance_4ea63b40e5e047d78dc6a318e1589c00.lineWidth = 0;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.lineStipple = 0;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.lineCap = "round";
			appearance_4ea63b40e5e047d78dc6a318e1589c00.haloing = true;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.haloColor = -1;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.outlineColor = 2;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.outlineOpacity = 255;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.fillColor = -1;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.fillOpacity = 255;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.polygonSmooth = true;
			Texture texture_4ea63b40e5e047d78dc6a318e1589c00;
			texture_4ea63b40e5e047d78dc6a318e1589c00.horizAlign = "center";
			texture_4ea63b40e5e047d78dc6a318e1589c00.horizPattern = 1.0;
			texture_4ea63b40e5e047d78dc6a318e1589c00.vertAlign = "middle";
			texture_4ea63b40e5e047d78dc6a318e1589c00.vertPattern = 1.0;
			texture_4ea63b40e5e047d78dc6a318e1589c00.id = -1;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.texture = texture_4ea63b40e5e047d78dc6a318e1589c00;
			appearance_4ea63b40e5e047d78dc6a318e1589c00.modulate = false;
			sgpi_ellipse(NULL, input_4ea63b40e5e047d78dc6a318e1589c00, appearance_4ea63b40e5e047d78dc6a318e1589c00);
			}
			break;
		default:
          /* Do nothing */
          break;
	}
    sgpi_rotate(NULL,cal_negation(0.0) , 0, 0, 1);
    sgpi_scale(NULL, 1 / 1, 1 / 1, 0);
    sgpi_translate(NULL, cal_negation(offset_origin_2bc184409d8546eab64ed117b2a45382.x), cal_negation(offset_origin_2bc184409d8546eab64ed117b2a45382.y) ,0);
    origin = relative_point(origin, offset_origin_2bc184409d8546eab64ed117b2a45382);
    origin = add_point(origin, (Point){0 / width, 0 / height});

    /*  === group End === */
   /* Object _a86dcba906aa4da29d40bbe439ec541c, Name:group, Type: combineContainer*/
    pre_origin = origin;
    origin =  cal_origin((Point){137.00 / width, 357.00 / height}, 252.00 / width, 200.00 / height);
    Point offset_origin_a86dcba906aa4da29d40bbe439ec541c = relative_point(origin, pre_origin);
    offset_origin_a86dcba906aa4da29d40bbe439ec541c = add_point(offset_origin_a86dcba906aa4da29d40bbe439ec541c, (Point){0 / width, 0 / height});
    sgpi_translate(NULL, offset_origin_a86dcba906aa4da29d40bbe439ec541c.x, offset_origin_a86dcba906aa4da29d40bbe439ec541c.y, 0);
    sgpi_scale(NULL, 1, 1, 0);
    sgpi_rotate(NULL, 0.0, 0, 0, 1);
	switch (-2147483647) {
		case -1:
		/* NoDisplay */
          break;
		case 1:{
		   /* Object {13811cb9-693f-4b18-b135-d5851a017cef}, Name:crown, Type: crown*/
			SGPI_Crown input_13811cb9693f4b18b135d5851a017cef;
			input_13811cb9693f4b18b135d5851a017cef = sgpi_crown_initial(input_13811cb9693f4b18b135d5851a017cef);
			Point point_13811cb9693f4b18b135d5851a017cef = relative_point((Point){339/width,507/height}, origin);
			input_13811cb9693f4b18b135d5851a017cef.center = point_13811cb9693f4b18b135d5851a017cef;
			input_13811cb9693f4b18b135d5851a017cef.radius = 100.00/width;
			Interval angle_13811cb9693f4b18b135d5851a017cef;
			angle_13811cb9693f4b18b135d5851a017cef.start = 30 + 180;
			angle_13811cb9693f4b18b135d5851a017cef.end = 150 + 180;
			input_13811cb9693f4b18b135d5851a017cef.angle = angle_13811cb9693f4b18b135d5851a017cef;
			input_13811cb9693f4b18b135d5851a017cef.clockwise = false;
			input_13811cb9693f4b18b135d5851a017cef.thickness = 30/width;
			PropertyArc appearance_13811cb9693f4b18b135d5851a017cef;
			appearance_13811cb9693f4b18b135d5851a017cef = sgpi_propertyArc_initial(appearance_13811cb9693f4b18b135d5851a017cef);
			appearance_13811cb9693f4b18b135d5851a017cef.lineWidth = 0;
			appearance_13811cb9693f4b18b135d5851a017cef.lineStipple = 0;
			appearance_13811cb9693f4b18b135d5851a017cef.lineCap = "round";
			appearance_13811cb9693f4b18b135d5851a017cef.haloing = true;
			appearance_13811cb9693f4b18b135d5851a017cef.haloColor = -1;
			appearance_13811cb9693f4b18b135d5851a017cef.outlineColor = 2;
			appearance_13811cb9693f4b18b135d5851a017cef.outlineOpacity = 255;
			appearance_13811cb9693f4b18b135d5851a017cef.fillColor = 31;
			appearance_13811cb9693f4b18b135d5851a017cef.fillOpacity = 255;
			appearance_13811cb9693f4b18b135d5851a017cef.polygonSmooth = true;
			Texture texture_13811cb9693f4b18b135d5851a017cef;
			texture_13811cb9693f4b18b135d5851a017cef.horizAlign = "center";
			texture_13811cb9693f4b18b135d5851a017cef.horizPattern = 1.0;
			texture_13811cb9693f4b18b135d5851a017cef.vertAlign = "middle";
			texture_13811cb9693f4b18b135d5851a017cef.vertPattern = 1.0;
			texture_13811cb9693f4b18b135d5851a017cef.id = -1;
			appearance_13811cb9693f4b18b135d5851a017cef.texture = texture_13811cb9693f4b18b135d5851a017cef;
			appearance_13811cb9693f4b18b135d5851a017cef.modulate = false;
			sgpi_crown(NULL, input_13811cb9693f4b18b135d5851a017cef, appearance_13811cb9693f4b18b135d5851a017cef);
			}
			break;
		default:{
			/* case 0 */
		   /* Object _7c2b8616bbe74510a98f99358867289e, Name:circle, Type: circle*/
			SGPI_Circle input_7c2b8616bbe74510a98f99358867289e;
			input_7c2b8616bbe74510a98f99358867289e = sgpi_circle_initial(input_7c2b8616bbe74510a98f99358867289e);
			Point point_7c2b8616bbe74510a98f99358867289e = relative_point((Point){212/width,455/height}, origin);
			input_7c2b8616bbe74510a98f99358867289e.center = point_7c2b8616bbe74510a98f99358867289e;
			input_7c2b8616bbe74510a98f99358867289e.radius = 75.00/width;
			PropertyArc appearance_7c2b8616bbe74510a98f99358867289e;
			appearance_7c2b8616bbe74510a98f99358867289e = sgpi_propertyArc_initial(appearance_7c2b8616bbe74510a98f99358867289e);
			appearance_7c2b8616bbe74510a98f99358867289e.lineWidth = 0;
			appearance_7c2b8616bbe74510a98f99358867289e.lineStipple = 0;
			appearance_7c2b8616bbe74510a98f99358867289e.lineCap = "round";
			appearance_7c2b8616bbe74510a98f99358867289e.haloing = true;
			appearance_7c2b8616bbe74510a98f99358867289e.haloColor = -1;
			appearance_7c2b8616bbe74510a98f99358867289e.outlineColor = 2;
			appearance_7c2b8616bbe74510a98f99358867289e.outlineOpacity = 255;
			appearance_7c2b8616bbe74510a98f99358867289e.fillColor = 21;
			appearance_7c2b8616bbe74510a98f99358867289e.fillOpacity = 255;
			appearance_7c2b8616bbe74510a98f99358867289e.polygonSmooth = true;
			Texture texture_7c2b8616bbe74510a98f99358867289e;
			texture_7c2b8616bbe74510a98f99358867289e.horizAlign = "center";
			texture_7c2b8616bbe74510a98f99358867289e.horizPattern = 1.0;
			texture_7c2b8616bbe74510a98f99358867289e.vertAlign = "middle";
			texture_7c2b8616bbe74510a98f99358867289e.vertPattern = 1.0;
			texture_7c2b8616bbe74510a98f99358867289e.id = -1;
			appearance_7c2b8616bbe74510a98f99358867289e.texture = texture_7c2b8616bbe74510a98f99358867289e;
			appearance_7c2b8616bbe74510a98f99358867289e.modulate = false;
			sgpi_circle(NULL, input_7c2b8616bbe74510a98f99358867289e, appearance_7c2b8616bbe74510a98f99358867289e);
			}
			break;
	}
    sgpi_rotate(NULL,cal_negation(0.0) , 0, 0, 1);
    sgpi_scale(NULL, 1 / 1, 1 / 1, 0);
    sgpi_translate(NULL, cal_negation(offset_origin_a86dcba906aa4da29d40bbe439ec541c.x), cal_negation(offset_origin_a86dcba906aa4da29d40bbe439ec541c.y) ,0);
    origin = relative_point(origin, offset_origin_a86dcba906aa4da29d40bbe439ec541c);
    origin = add_point(origin, (Point){0 / width, 0 / height});

    /*  === group End === */
   /* Object _b536eab1322142319c314bb7443b2e86, Name:group, Type: combineContainer*/
    pre_origin = origin;
    origin =  cal_origin((Point){513.00 / width, 400.00 / height}, 201.00 / width, 158.00 / height);
    Point offset_origin_b536eab1322142319c314bb7443b2e86 = relative_point(origin, pre_origin);
    offset_origin_b536eab1322142319c314bb7443b2e86 = add_point(offset_origin_b536eab1322142319c314bb7443b2e86, (Point){0 / width, 0 / height});
    sgpi_translate(NULL, offset_origin_b536eab1322142319c314bb7443b2e86.x, offset_origin_b536eab1322142319c314bb7443b2e86.y, 0);
    sgpi_scale(NULL, 1, 1, 0);
    sgpi_rotate(NULL, 0.0, 0, 0, 1);
	switch (1) {
		case -1:
		/* NoDisplay */
          break;
		case 1:{
		   /* Object _4b0aca66cfee4fb9a838437681fa22da, Name:line, Type: line*/
			SGPI_Lines input_4b0aca66cfee4fb9a838437681fa22da;
			input_4b0aca66cfee4fb9a838437681fa22da = sgpi_line_initial(input_4b0aca66cfee4fb9a838437681fa22da);
			Point points_4b0aca66cfee4fb9a838437681fa22da[] = {relative_point((Point){513/width,502/height}, origin),relative_point((Point){618/width,558/height}, origin),relative_point((Point){714/width,502/height}, origin)};
			input_4b0aca66cfee4fb9a838437681fa22da.point = points_4b0aca66cfee4fb9a838437681fa22da;
			double angle_4b0aca66cfee4fb9a838437681fa22da[] = {0,0,0};
			input_4b0aca66cfee4fb9a838437681fa22da.angle = angle_4b0aca66cfee4fb9a838437681fa22da;
			bool clockwise_4b0aca66cfee4fb9a838437681fa22da[] = {false,false,false};
			input_4b0aca66cfee4fb9a838437681fa22da.clockwise = clockwise_4b0aca66cfee4fb9a838437681fa22da;
			input_4b0aca66cfee4fb9a838437681fa22da.pointCount = 3;
			PropertyLines appearance_4b0aca66cfee4fb9a838437681fa22da;
			appearance_4b0aca66cfee4fb9a838437681fa22da = sgpi_propertyLines_initial(appearance_4b0aca66cfee4fb9a838437681fa22da);
			appearance_4b0aca66cfee4fb9a838437681fa22da.lineWidth = 0;
			appearance_4b0aca66cfee4fb9a838437681fa22da.lineStipple = 0;
			appearance_4b0aca66cfee4fb9a838437681fa22da.lineCap = "round";
			appearance_4b0aca66cfee4fb9a838437681fa22da.haloing = true;
			appearance_4b0aca66cfee4fb9a838437681fa22da.haloColor = -1;
			appearance_4b0aca66cfee4fb9a838437681fa22da.outlineColor = 21;
			appearance_4b0aca66cfee4fb9a838437681fa22da.outlineOpacity = 255;
			sgpi_lines(NULL, input_4b0aca66cfee4fb9a838437681fa22da, appearance_4b0aca66cfee4fb9a838437681fa22da);
			}
			break;
		default:{
			/* case 0 */
		   /* Object _be766f72b6ae4e4cb5f40364e3c64070, Name:rectangle, Type: rectangle*/
			SGPI_Rectangle input_be766f72b6ae4e4cb5f40364e3c64070;
			input_be766f72b6ae4e4cb5f40364e3c64070 = sgpi_rectangle_initial(input_be766f72b6ae4e4cb5f40364e3c64070);
			Point firstPoint_be766f72b6ae4e4cb5f40364e3c64070 = relative_point((Point){513/width,400/height}, origin);
			input_be766f72b6ae4e4cb5f40364e3c64070.firstPoint = firstPoint_be766f72b6ae4e4cb5f40364e3c64070;
			Point thirdPoint_be766f72b6ae4e4cb5f40364e3c64070 = relative_point((Point){713/width,500/height}, origin);
			input_be766f72b6ae4e4cb5f40364e3c64070.thirdPoint = thirdPoint_be766f72b6ae4e4cb5f40364e3c64070;
			double angle_be766f72b6ae4e4cb5f40364e3c64070[] = {0.0,0.0,0.0,0.0};
			input_be766f72b6ae4e4cb5f40364e3c64070.angle = angle_be766f72b6ae4e4cb5f40364e3c64070;
			bool clockwise_be766f72b6ae4e4cb5f40364e3c64070[] = {false,false,false,false};
			input_be766f72b6ae4e4cb5f40364e3c64070.clockwise = clockwise_be766f72b6ae4e4cb5f40364e3c64070;
			PropertyPolygon appearance_be766f72b6ae4e4cb5f40364e3c64070;
			appearance_be766f72b6ae4e4cb5f40364e3c64070 = sgpi_propertyPolygon_initial(appearance_be766f72b6ae4e4cb5f40364e3c64070);
			appearance_be766f72b6ae4e4cb5f40364e3c64070.lineStipple = 0;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.lineCap = "round";
			appearance_be766f72b6ae4e4cb5f40364e3c64070.haloing = true;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.haloColor = -1;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.outlineColor = 2;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.outlineOpacity = 255;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.fillColor = 41;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.fillOpacity = 255;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.polygonSmooth = true;
			Texture texture_be766f72b6ae4e4cb5f40364e3c64070;
			texture_be766f72b6ae4e4cb5f40364e3c64070.horizAlign = "center";
			texture_be766f72b6ae4e4cb5f40364e3c64070.horizPattern = 1.0;
			texture_be766f72b6ae4e4cb5f40364e3c64070.vertAlign = "middle";
			texture_be766f72b6ae4e4cb5f40364e3c64070.vertPattern = 1.0;
			texture_be766f72b6ae4e4cb5f40364e3c64070.id = -1;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.texture = texture_be766f72b6ae4e4cb5f40364e3c64070;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.modulate = false;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.tessellate = false;
			appearance_be766f72b6ae4e4cb5f40364e3c64070.lineWidth = 0;
			sgpi_rectangle(NULL, input_be766f72b6ae4e4cb5f40364e3c64070, appearance_be766f72b6ae4e4cb5f40364e3c64070);
			}
			break;
	}
    sgpi_rotate(NULL,cal_negation(0.0) , 0, 0, 1);
    sgpi_scale(NULL, 1 / 1, 1 / 1, 0);
    sgpi_translate(NULL, cal_negation(offset_origin_b536eab1322142319c314bb7443b2e86.x), cal_negation(offset_origin_b536eab1322142319c314bb7443b2e86.y) ,0);
    origin = relative_point(origin, offset_origin_b536eab1322142319c314bb7443b2e86);
    origin = add_point(origin, (Point){0 / width, 0 / height});

    /*  === group End === */
// === GCG generate sgpi code End ===

    sgpi_scale(NULL, 1, -1, 1);    sgpi_translate(NULL, 1, -1, 0);


}