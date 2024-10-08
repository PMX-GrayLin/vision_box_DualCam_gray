#include "IPS_MethodStructureDef.h"

const char* enum_Subscribe_CAMReg[] = {

	//VisonBox Method control.
	"AUTORUNNING_SET_PARAM",
	"TRIGGERMODE_SET_PARAM",

	//GigE camera control.< static image >
	"CAMERA_SET_INITIALIZE",
	"CAMERA_SET_INQUIRY",
	"CAMERA_SET_CONFIG",
	"CAMERA_SET_PARAM",
	"CAMERA_SET_RELEASE",

	//GigE camera control.< streaming >
	"CAMERA_STREAM_SET_PREPARE",
	"CAMERA_STREAM_SET_INQUIRY",
	"CAMERA_STREAM_SET_START",
	"CAMERA_STREAM_SET_CAPTURE",
	"CAMERA_STREAM_SET_STOP",
	"CAMERA_STREAM_SET_CLOSE",

	//IPL Algorithm control.
	"IMGCALIBRATION_SET_PARAM",

	"CROPTEMPIMG_SET_PARAM",

	"PATTERNMATCH_SET_PARAM",
	"FINDPROFILE_SET_PARAM",
	"FINDCIRCLE_SET_PARAM",	/*"DETECTCIRCLE_SET_MODE",*/

	"IBOXANNULUS_SET_PARAM",
	"IBOXRECT_SET_PARAM",
	"IBOXCIRCLE_SET_PARAM",

	"CALCOORDINATE_SET_PARAM",

	"CROPROIIMG_ANNULUS_SET_PARAM",
	"CROPROIIMG_RECT_SET_PARAM",
	"CROPROIIMG_CIRCLE_SET_PARAM",

	"HISTOGRAM_ANNULUS_SET_PARAM",
	"HISTOGRAM_RECT_SET_PARAM",
	"HISTOGRAM_CIRCLE_SET_PARAM",

	"THRESHOLD_SET_PARAM",
	"MROPHOLOGY_SET_PARAM",
	"NOISEREMOVAL_SET_PARAM",
	"DATAAUGMENTATION_SET_PARAM",

	"GLUEWIDTHMEAS_ANNULUS_SET_PARAM",
	"GLUEWIDTHMEAS_RECT_SET_PARAM",

	"CMD_SUBSCRIBE_END"
};

const char* enum_Publish_CAMReg[] = {

	//VisonBox Method control.
	"AUTORUNNING_GET_RESP",
	"TRIGGERMODE_GET_RESP",


	//GigE camera control.< static image >
	"CAMERA_INITIALIZE_GET_RESP",
	"CAMERA_INQUIRY_GET_RESP",
	"CAMERA_CONFIG_GET_RESP",
	"CAMERA_PARAM_GET_RESP",
	"CAMERA_RELEASE_GET_RESP",

	//GigE camera control.< streaming >
	"CAMERA_STREAM_PREPARE_GET_RESP",
	"CAMERA_STREAM_INQUIRY_GET_RESP",
	"CAMERA_STREAM_START_GET_RESP",
	"CAMERA_STREAM_CAPTURE_GET_RESP",
	"CAMERA_STREAM_STOP_GET_RESP",
	"CAMERA_STREAM_CLOSE_GET_RESP",


	//IPL Algorithm control.
	"IMGCALIBRATION_GET_RESP",

	"CROPTEMPIMG_GET_RESP",

	"PATTERNMATCH_GET_RESP",
	"FINDPROFILE_GET_RESP",
	"FINDCIRCLE_GET_RESP",	/*DETECTCIRCLE_SET_MODE",*/

	"IBOXANNULUS_GET_RESP",
	"IBOXRECT_GET_RESP",
	"IBOXCIRCLE_GET_RESP",

	"CALCOORDINATE_GET_RESP",

	"CROPROIIMG_ANNULUS_GET_RESP",
	"CROPROIIMG_RECT_GET_RESP",
	"CROPROIIMG_CIRCLE_GET_RESP",

	"HISTOGRAM_ANNULUS_GET_RESP",
	"HISTOGRAM_RECT_GET_RESP",
	"HISTOGRAM_CIRCLE_GET_RESP",

	"THRESHOLD_GET_RESP",
	"MROPHOLOGY_GET_RESP",
	"NOISEREMOVAL_GET_RESP",
	"DATAAUGMENTATION_GET_RESP",
	"GLUEWIDTHMEAS_ANNULUS_GET_RESP",
	"GLUEWIDTHMEAS_RECT_GET_RESP",

	"CMD_PUBLISH_END"
};