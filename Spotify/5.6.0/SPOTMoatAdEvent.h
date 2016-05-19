/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPOTMoatAdEvent : NSObject {

	unsigned _eventType;
	float _adVolume;
	double _adPlayhead;
	double _timeStamp;

}

@property (assign) unsigned eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign) double adPlayhead;               //@synthesize adPlayhead=_adPlayhead - In the implementation block
@property (assign) float adVolume;                  //@synthesize adVolume=_adVolume - In the implementation block
@property (readonly) double timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
+(id)adEventStrings;
-(id)initWithType:(unsigned)arg1 withPlayheadMillis:(double)arg2 withVolume:(float)arg3 ;
-(float)adVolume;
-(void)setAdVolume:(float)arg1 ;
-(double)adPlayhead;
-(void)setAdPlayhead:(double)arg1 ;
-(id)eventAsString;
-(id)initWithType:(unsigned)arg1 withPlayheadMillis:(double)arg2 ;
-(id)asDict;
-(id)description;
-(double)timeStamp;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
@end

