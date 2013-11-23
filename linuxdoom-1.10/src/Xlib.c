#include "X11/Xlib.h"

KeySym XKeycodeToKeysym(Display *display,
                        //unsigned int	/* keycode */,
                        KeyCode	keycode,
                        int index)
{
  KeySym k = 0;

  return k;
}

int XNextEvent(
    Display*		display,
    XEvent*		event_return
)
{
  return 0;
}

Cursor XCreatePixmapCursor(
    Display*		display,
    Pixmap		source,
    Pixmap		mask,
    XColor*		foreground_color,
    XColor*		background_color,
    unsigned int	x,
    unsigned int	y
)
{
  return 0;
}

Pixmap XCreatePixmap(
    Display*		display,
    Drawable		d,
    unsigned int	width,
    unsigned int	height,
    unsigned int	depth
)
{
  return 0;
}

GC XCreateGC(
    Display*		display,
    Drawable		d,
    unsigned long	valuemask,
    XGCValues*		values
)
{
  return 0;
}

int XFillRectangle(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height
)
{
  return 0;
}

int XFreePixmap(
    Display*		display,
    Pixmap		pixmap
)
{
  return 0;
}

int XPending(
    Display*		display
)
{
  return 0;
}


int XWarpPointer(
    Display*		display,
    Window		src_w,
    Window		dest_w,
    int			src_x,
    int			src_y,
    unsigned int	src_width,
    unsigned int	src_height,
    int			dest_x,
    int			dest_y
)
{
  return 0;
}

int XSync(
    Display*		display,
    Bool		discard
)
{
  return 0;
}

int XStoreColors(
    Display*		display,
    Colormap		colormap,
    XColor*		color,
    int			ncolors
)
{
  return 0;
}

Display *XOpenDisplay(
    _Xconst char*	display_name
)
{
  return 0;
}

Colormap XCreateColormap(
    Display*		display,
    Window		w,
    Visual*		visual,
    int			alloc
)
{
  return 0;
}

int XDefineCursor(
    Display*		display,
    Window		w,
    Cursor		cursor
)
{
  return 0;
}

int XMapWindow(
    Display*		display,
    Window		w
)
{
  return 0;
}

int XGrabPointer(
    Display*		display,
    Window		grab_window,
    Bool		owner_events,
    unsigned int	event_mask,
    int			pointer_mode,
    int			keyboard_mode,
    Window		confine_to,
    Cursor		cursor,
    Time		time
)
{
  return 0;
}

XImage *XCreateImage(
    Display*		display,
    Visual*		visual,
    unsigned int	depth,
    int			format,
    int			offset,
    char*		data,
    unsigned int	width,
    unsigned int	height,
    int			bitmap_pad,
    int			bytes_per_line
)
{
  return 0;
}

int XFreeGC(
    Display*		display,
    GC			gc
)
{
  return 0;
}

int XPutImage(
    Display*		display,
    Drawable		d,
    GC			gc,
    XImage*		image,
    int			src_x,
    int			src_y,
    int			dest_x,
    int			dest_y,
    unsigned int	width,
    unsigned int	height
)
{
  return 0;
}

Window XCreateWindow(
    Display*		display,
    Window		parent,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    unsigned int	border_width,
    int			depth,
    unsigned int	class,
    Visual*		visual,
    unsigned long	valuemask,
    XSetWindowAttributes*	attributes
)
{
  return 0;
}
