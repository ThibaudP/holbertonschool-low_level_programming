_translate(DIT_)
{
	_putchar(DIT_ > 3 ? _translate(DIT_ >> 1) : '\0');
	return DIT_ & 1 ? '-' : '.';
}
_putchar(DIT_) char DIT_;
{
	(void)write(1, &DIT_, 1);
}
char ascii_array[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";

main()
{
	char *_DIT, *DAH_, *DIT_, *_DIT_, *malloc(), *gets();
 
	for(_DIT = malloc(81), DIT_ = _DIT++ ; _DIT == gets(_DIT); _putchar('\n'))
	{
		for (DAH_=_DIT; *DAH_; _putchar(*_DIT_ ? _translate(*DIT_) : '?'), _putchar(' '),DAH_++)
		{
			for (*DIT_ = 2, _DIT_ = ascii_array ; *_DIT_ && (*_DIT_ != (*DAH_ >= 'a' ? * DAH_ & 223 : *DAH_)) ; (*DIT_)++ , _DIT_++)
			{
				*DIT_ += (*_DIT_ >= 'a' ? *_DIT_ - 'a' : 0);
			}
		}
	}
}
