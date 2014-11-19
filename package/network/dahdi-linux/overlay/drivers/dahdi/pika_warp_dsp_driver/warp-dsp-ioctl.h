#ifndef _WARP_DSP_IOCTL_H_
#define _WARP_DSP_IOCTL_H_

/* dsp firmware control (to change into ioctl) */
#define DSP_IOC_MAGIC			'D'
#define	DSP_RESET			_IO(DSP_IOC_MAGIC, 0)
#define DSP_LOAD_FIRMWARE		_IO(DSP_IOC_MAGIC, 1)
#define DSP_QUERY_VERSION		_IO(DSP_IOC_MAGIC, 2)
#define DSP_CONFIGURE_PORTS		_IO(DSP_IOC_MAGIC, 3)
#define DSP_ENABLE_DEBUG		_IO(DSP_IOC_MAGIC, 4)
#define DSP_DISABLE_DEBUG		_IO(DSP_IOC_MAGIC, 5)
#define DSP_PEEK_ADDRESS		_IO(DSP_IOC_MAGIC, 6)
#define DSP_POKE_ADDRESS		_IO(DSP_IOC_MAGIC, 7)
#define DSP_PEEK_HPIC			_IO(DSP_IOC_MAGIC, 8)
#define DSP_POKE_HPIC			_IO(DSP_IOC_MAGIC, 9)
#define DSP_SEND_DATA			_IO(DSP_IOC_MAGIC, 10)
#define DSP_GET_DATA			_IO(DSP_IOC_MAGIC, 11)
#define DSP_GET_TRACE_DATA		_IO(DSP_IOC_MAGIC, 12)

#endif /* _WARP_DSP_IOCTL_H_ */