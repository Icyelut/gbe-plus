
#ifndef OGLMAN_GBE_QT
#define OGLMAN_GBE_QT

#include "common/common.h"

class ogl_manager
{
	public:

	ogl_manager();
	~ogl_manager();

	void init();
	void paint();
	void resize(u32 w, u32 h);

	u32 lcd_texture;
	u32 program_id;
	u32 external_data_usage;
	u32 vertex_buffer_object, vertex_array_object, element_buffer_object;
	float ogl_x_scale, ogl_y_scale;
	float ext_data_1, ext_data_2;
	void* pixel_data;
};

#endif
