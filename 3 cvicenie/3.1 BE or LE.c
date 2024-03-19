

	main(){
		short int i=1;
		char *k;
		char c; 
		
		k=(char*)i;
		c=(char*)k;
		if (c==1) printf("LittleEndian (c=%d)",c);
				else printf("BigEndian (c=%d)",c);
	}