/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SDLGlobals : NSObject {

	unsigned _protocolVersion;
	unsigned _maxHeadUnitVersion;

}

@property (assign,nonatomic) unsigned protocolVersion;                 //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned maxMTUSize; 
@property (assign,nonatomic) unsigned maxHeadUnitVersion;              //@synthesize maxHeadUnitVersion=_maxHeadUnitVersion - In the implementation block
+(id)globals;
-(unsigned)maxHeadUnitVersion;
-(unsigned)maxMTUSize;
-(void)setMaxHeadUnitVersion:(unsigned)arg1 ;
-(id)init;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(unsigned)protocolVersion;
@end

