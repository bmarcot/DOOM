#include "X11/Xlib.h"
#include "X11/extensions/XShm.h"

Bool XShmDetach(
    Display*		dpy,
    XShmSegmentInfo*	shminfo
)
{
  return 0;
}

Bool XShmPutImage(
    Display*		dpy,
    Drawable		d,
    GC			gc,
    XImage*		image,
    int			src_x,
    int			src_y,
    int			dst_x,
    int			dst_y,
    unsigned int	src_width,
    unsigned int	src_height,
    Bool		send_event
)
{
  return 0;
}

Bool XShmQueryExtension(
    Display*		dpy
)
{
  return 0;
}

int XShmGetEventBase(
    Display* 		dpy
)
{
  return 0;
}

XImage *XShmCreateImage(
    Display*		dpy,
    Visual*		visual,
    unsigned int	depth,
    int			format,
    char*		data,
    XShmSegmentInfo*	shminfo,
    unsigned int	width,
    unsigned int	height
)
{
  return 0;
}

Bool XShmAttach(
    Display*		dpy,
    XShmSegmentInfo*	shminfo
)
{
  return 0;
}
