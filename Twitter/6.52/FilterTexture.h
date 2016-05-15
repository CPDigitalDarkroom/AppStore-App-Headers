/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FilterTexture : NSObject {

	NSString* _name;
	unsigned _texture;
	int _filterMode;
	int _wrapMode;

}

@property (retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign) unsigned texture;              //@synthesize texture=_texture - In the implementation block
@property (assign) int filterMode;                //@synthesize filterMode=_filterMode - In the implementation block
@property (assign) int wrapMode;                  //@synthesize wrapMode=_wrapMode - In the implementation block
-(int)wrapMode;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)filterMode;
-(void)setFilterMode:(int)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(unsigned)texture;
-(void)setTexture:(unsigned)arg1 ;
@end

