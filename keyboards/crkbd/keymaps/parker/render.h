#ifndef RENDER_H
#define RENDER_H

void render_samurai(void) {
    static const char PROGMEM image[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x80, 0xc0, 0xc0, 0xe0, 0xf0, 0x80, 0x00, 0x80, 0xf0, 0xf8, 0x0c, 0x06, 0x82, 0x80, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x00,
		0xff, 0xff, 0xf3, 0xf0, 0xc0, 0xc1, 0xe0, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x63, 0x30, 0xf8, 0x00,
		0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x04, 0x03, 0x03, 0x00, 0x00,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6f, 0x47, 0xe0, 0xf8, 0xc0, 0xc1, 0xe0, 0xf0,
		0xf8, 0xfc, 0x1f, 0x0e, 0x00, 0xc3, 0xe1, 0x30, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xe7, 0xf3, 0xf9, 0xfc, 0xe0, 0xf3, 0xf9, 0x3c, 0x4e, 0xb0, 0xdf, 0xff, 0xe7, 0xe1, 0xe0, 0xff,
		0xff, 0x00, 0xf8, 0x1e, 0x87, 0xc3, 0xe0, 0xf8, 0x0e, 0x24, 0x28, 0x0f, 0xc0, 0x70, 0x10, 0x20,
		0xff, 0x0f, 0x77, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7e, 0x3f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x01,
		0xc7, 0x7c, 0x03, 0xf8, 0xfc, 0x07, 0xf3, 0xe0, 0x38, 0x38, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
		0xfd, 0x3e, 0x78, 0xf9, 0xbb, 0x63, 0xb1, 0x60, 0xe4, 0xc6, 0xc0, 0xe0, 0x20, 0xb0, 0x98, 0xcc,
		0x67, 0xb0, 0xfc, 0x67, 0x01, 0x1e, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xff, 0x7f, 0x0e, 0x5c, 0x3b, 0x86, 0xcc, 0xd9, 0x92, 0xb2, 0xf2, 0xf2, 0xf3, 0x19, 0xcc, 0xe6,
		0xc6, 0x93, 0xf4, 0x8c, 0xb9, 0x83, 0xce, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x8e, 0x8e, 0x86, 0xc6, 0x83, 0x81, 0xc6, 0x0e, 0x1e, 0x3e, 0x79, 0x77, 0xed, 0xe8, 0xc0, 0xc1,
		0x81, 0x80, 0x06, 0x0e, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xfd, 0xfd, 0xfb, 0x56, 0x25, 0x63, 0x0b, 0x18, 0x1c, 0x0f, 0x0f, 0x03, 0x00, 0x01, 0x01, 0x01,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x24, 0x28, 0x00, 0x00, 0x18, 0x24, 0x18, 0x00,
		0x00, 0x04, 0x34, 0x0c, 0x00, 0x00, 0x04, 0x34, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(image, sizeof(image));
}

void render_kitty(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x80, 0xe0, 0x30, 0x9c, 0xc4, 0x46, 0x43, 0x21, 0x21, 0x23, 0x26, 0x24, 0x28, 0x30,
        0x20, 0x20, 0x60, 0x40, 0xc0, 0xc0, 0x60, 0x20, 0x20, 0x10, 0x10, 0x10, 0x90, 0xf0, 0x20, 0xe0,
        0x00, 0xf8, 0x3f, 0x94, 0x93, 0x91, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18,
        0x08, 0x08, 0x88, 0x88, 0x08, 0x10, 0x11, 0x31, 0x63, 0xc6, 0x84, 0x0c, 0x3f, 0x60, 0xe0, 0x3f,
        0x7f, 0x80, 0x3e, 0xff, 0x7f, 0xbf, 0x3f, 0x00, 0x87, 0xfc, 0x00, 0xff, 0x00, 0x00, 0x00, 0xfc,
        0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7e, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x80, 0x7f, 0x00,
        0x00, 0x01, 0x02, 0x04, 0x0c, 0x14, 0x26, 0x23, 0xc1, 0x40, 0x40, 0x83, 0x8e, 0x98, 0x90, 0xa0,
        0xa1, 0xa3, 0xa3, 0xa0, 0x63, 0x57, 0x52, 0x28, 0x24, 0x33, 0xe8, 0x84, 0x02, 0x01, 0x00, 0x00,
        0x00, 0x00, 0xc0, 0xe0, 0x30, 0x10, 0x18, 0x0e, 0x03, 0x80, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x00,
        0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x7e, 0x60, 0xc0, 0x00,
        0x00, 0xe0, 0x10, 0x09, 0x09, 0x11, 0x71, 0xc1, 0x07, 0x0d, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x06,
        0x03, 0x00, 0x02, 0x06, 0x04, 0x04, 0x04, 0x04, 0x02, 0x82, 0x43, 0x31, 0x0f, 0xc0, 0x71, 0x1e,
        0x00, 0x00, 0x03, 0x06, 0x04, 0x0c, 0x08, 0x19, 0x11, 0x11, 0x11, 0x12, 0x12, 0x32, 0x22, 0x22,
        0x22, 0x32, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x09, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00
    };

    oled_write_raw_P(image, sizeof(image));
}


void render_houdini(void) {
    static const char PROGMEM houdini_logo[] = {
        0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
        0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xe1, 0xf0, 0x78, 0x38, 0x3c, 0x1c, 0x1c, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x1c, 0x1c, 0x1c, 0x38,
        0x78, 0xf0, 0xe0, 0xc0, 0x01, 0x03, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x03, 0x00, 0x00, 0xe0, 0xf8, 0xfc, 0x3e, 0x0e, 0x0f, 0x3f, 0x7f, 0x7e, 0x7e, 0x3c, 0x00, 0x00,
        0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf8, 0xe0, 0xc0, 0x80, 0x07, 0x0f, 0x1f, 0x1c, 0x1c, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3c, 0x1c,
        0x1e, 0x0f, 0x0f, 0x03, 0x81, 0xc0, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };

    oled_write_raw_P(houdini_logo, sizeof(houdini_logo));
}

void render_lower(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x78, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x78, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1e, 0x1c, 0x3c,
        0x3c, 0x1c, 0x1e, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    };

    oled_write_raw_P(image, sizeof(image));
}

void render_raise(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x78, 0x38, 0x3c,
        0x3c, 0x38, 0x78, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x1e, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1e, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(image, sizeof(image));
}
void render_gaming(void) {
    static const char PROGMEM gaming[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0xfc, 0xfe, 0xee, 0xc7, 0x6f, 0x3f, 0x3f, 0x6f, 0xf9,
		0xf9, 0xef, 0x7f, 0x3f, 0x6f, 0xd7, 0xee, 0xfe, 0xfc, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x78, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0f, 0x0e, 0x0c, 0x0c, 0x0e, 0x0f,
		0x0f, 0x0f, 0x0f, 0x0e, 0x0f, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0x78, 0x00, 0x00, 0x00, 0x00
	};
    oled_write_raw_P(gaming, sizeof(gaming));
}

void render_switcher(void) {
    static const char PROGMEM image[] = {
        0x00, 0xfe, 0x02, 0xf2, 0x92, 0x12, 0x92, 0xf2, 0x02, 0xf2, 0x92, 0x12, 0x92, 0xf2, 0x02, 0xf2,
        0x92, 0x12, 0x92, 0xf2, 0x02, 0xf2, 0x92, 0x12, 0x92, 0xf2, 0x02, 0xfe, 0x5a, 0x5a, 0xfe, 0x00,
        0x00, 0x0f, 0x28, 0x28, 0x39, 0x29, 0x29, 0x28, 0xa8, 0x28, 0x29, 0xa9, 0x29, 0x28, 0xa8, 0x28,
        0x29, 0xa9, 0x29, 0x28, 0xa8, 0x28, 0x29, 0xa9, 0x29, 0x28, 0x28, 0x3f, 0x2b, 0x2b, 0x0f, 0x00,
        0x00, 0x38, 0x28, 0x38, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
        0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x38, 0x28, 0x38, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x73, 0x53, 0x73, 0x23, 0x23, 0x23, 0x20, 0x20, 0x3f, 0x00,
        0x00, 0x3f, 0x20, 0x20, 0x23, 0x23, 0x23, 0x73, 0x53, 0x73, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(image, sizeof(image));
}

#define NUM_FRAMES_KITTY 3
#define ANIM_SIZE_KITTY 224
static void render_kitty_anim(void) {

    static const char PROGMEM anim_frames[NUM_FRAMES_KITTY][ANIM_SIZE_KITTY] = {
        {
            0x00, 0x00, 0x80, 0xe0, 0x30, 0x9c, 0xc4, 0x46, 0x43, 0x21, 0x21, 0x23, 0x26, 0x24, 0x28, 0x30,
            0x20, 0x20, 0x60, 0x40, 0xc0, 0xc0, 0x60, 0x20, 0x20, 0x10, 0x10, 0x10, 0x90, 0xf0, 0x20, 0xe0,
            0x00, 0xf8, 0x3f, 0x94, 0x93, 0x91, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18,
            0x08, 0x08, 0x88, 0x88, 0x08, 0x10, 0x11, 0x31, 0x63, 0xc6, 0x84, 0x0c, 0x3f, 0x60, 0xe0, 0x3f,
            0x7f, 0x80, 0x3e, 0xff, 0x7f, 0xbf, 0x3f, 0x00, 0x87, 0xfc, 0x00, 0xff, 0x00, 0x00, 0x00, 0xfc,
            0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7e, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x80, 0x7f, 0x00,
            0x00, 0x01, 0x02, 0x04, 0x0c, 0x14, 0x26, 0x23, 0xc1, 0x40, 0x40, 0x83, 0x8e, 0x98, 0x90, 0xa0,
            0xa1, 0xa3, 0xa3, 0xa0, 0x63, 0x57, 0x52, 0x28, 0x24, 0x33, 0xe8, 0x84, 0x02, 0x01, 0x00, 0x00,
            0x00, 0x00, 0xc0, 0xe0, 0x30, 0x10, 0x18, 0x0e, 0x03, 0x80, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x00,
            0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x7e, 0x60, 0xc0, 0x00,
            0x00, 0xe0, 0x10, 0x09, 0x09, 0x11, 0x71, 0xc1, 0x07, 0x0d, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x06,
            0x03, 0x00, 0x02, 0x06, 0x04, 0x04, 0x04, 0x04, 0x02, 0x82, 0x43, 0x31, 0x0f, 0xc0, 0x71, 0x1e,
            0x00, 0x00, 0x03, 0x06, 0x04, 0x0c, 0x08, 0x19, 0x11, 0x11, 0x11, 0x12, 0x12, 0x32, 0x22, 0x22,
            0x22, 0x32, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x09, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00
		},
        {
            0x00, 0x00, 0x80, 0xe0, 0x30, 0x9c, 0xc4, 0x46, 0x43, 0x21, 0x21, 0x23, 0x26, 0x24, 0x28, 0x30,
            0x20, 0x20, 0x60, 0x40, 0xc0, 0xc0, 0x60, 0x20, 0x20, 0x10, 0x10, 0x10, 0x90, 0xf0, 0x20, 0xe0,
            0x00, 0xf8, 0x3f, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x06, 0x04, 0x0c, 0x3f, 0x60, 0xe0, 0x3f,
            0x7f, 0xa9, 0x3c, 0x7c, 0x7c, 0xbc, 0x3c, 0xac, 0xac, 0x78, 0x00, 0x10, 0x38, 0x28, 0x28, 0xb8,
            0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0x38, 0x28, 0x30, 0x10, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00,
            0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x20, 0xc0, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
            0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x30, 0xe8, 0x84, 0x02, 0x01, 0x00, 0x00,
            0x00, 0x00, 0xc0, 0xe0, 0x30, 0x10, 0x18, 0x0e, 0x03, 0x80, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x00,
            0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x7e, 0x60, 0xc0, 0x00,
            0x00, 0xe0, 0x10, 0x09, 0x09, 0x11, 0x71, 0xc1, 0x07, 0x0d, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x06,
            0x03, 0x00, 0x02, 0x06, 0x04, 0x04, 0x04, 0x04, 0x02, 0x82, 0x43, 0x31, 0x0f, 0xc0, 0x71, 0x1e,
            0x00, 0x00, 0x03, 0x06, 0x04, 0x0c, 0x08, 0x19, 0x11, 0x11, 0x11, 0x12, 0x12, 0x32, 0x22, 0x22,
            0x22, 0x32, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x09, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00
        },
        {
            0x00, 0x00, 0x80, 0xe0, 0x30, 0x9c, 0xc4, 0x46, 0x43, 0x21, 0x21, 0x23, 0x26, 0x24, 0x28, 0x30,
            0x20, 0x20, 0x60, 0x40, 0xc0, 0xc0, 0x60, 0x20, 0x20, 0x10, 0x10, 0x10, 0x90, 0xf0, 0x20, 0xe0,
            0x00, 0xf8, 0x3f, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x06, 0x04, 0x0c, 0x3f, 0x60, 0xe0, 0x3f,
            0x7f, 0xb9, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x00, 0x10, 0x18, 0x08, 0x08, 0x08,
            0x08, 0x08, 0x08, 0x08, 0x08, 0x28, 0x28, 0x28, 0x30, 0x10, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00,
            0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x20, 0xc0, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
            0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x30, 0xe8, 0x84, 0x02, 0x01, 0x00, 0x00,
            0x00, 0x00, 0xc0, 0xe0, 0x30, 0x10, 0x18, 0x0e, 0x03, 0x80, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x00,
            0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x7e, 0x60, 0xc0, 0x00,
            0x00, 0xe0, 0x10, 0x09, 0x09, 0x11, 0x71, 0xc1, 0x07, 0x0d, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x06,
            0x03, 0x00, 0x02, 0x06, 0x04, 0x04, 0x04, 0x04, 0x02, 0x82, 0x43, 0x31, 0x0f, 0xc0, 0x71, 0x1e,
            0x00, 0x00, 0x03, 0x06, 0x04, 0x0c, 0x08, 0x19, 0x11, 0x11, 0x11, 0x12, 0x12, 0x32, 0x22, 0x22,
            0x22, 0x32, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x09, 0x0c, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00,
        },
    };

    static const uint16_t anim_frame_durations[NUM_FRAMES_KITTY] = {
        6000, // idle
        500, // half closed
        200 // full closed
    };
    static int16_t anim_frame_duration = anim_frame_durations[0];

    static uint32_t anim_timer = 0;
    static uint8_t frame_num = 0;

    if(timer_elapsed32(anim_timer) > anim_frame_duration){
        frame_num = (frame_num+1)%NUM_FRAMES_KITTY;
        anim_frame_duration = anim_frame_durations[frame_num];
        anim_timer = timer_read32();



        // char str[12];
        // sprintf(str, "%" PRIu8, frame_num);
        // char str1[12];
        // sprintf(str1, "%" PRIu16, anim_frame_duration);
        // oled_write_P(PSTR(str), false);
        // oled_write_P(PSTR(str1), false);
    }
    oled_write_raw_P(anim_frames[frame_num], ANIM_SIZE_KITTY);
}


#endif
