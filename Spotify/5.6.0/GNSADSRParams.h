/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GNSADSRParams : NSObject <NSCopying> {

	float _sustainAmplitude;
	double _attackTime;
	double _decayTime;
	double _sustainTime;
	double _releaseTime;

}

@property (assign,nonatomic) double attackTime;                   //@synthesize attackTime=_attackTime - In the implementation block
@property (assign,nonatomic) double decayTime;                    //@synthesize decayTime=_decayTime - In the implementation block
@property (assign,nonatomic) double sustainTime;                  //@synthesize sustainTime=_sustainTime - In the implementation block
@property (assign,nonatomic) double releaseTime;                  //@synthesize releaseTime=_releaseTime - In the implementation block
@property (assign,nonatomic) float sustainAmplitude;              //@synthesize sustainAmplitude=_sustainAmplitude - In the implementation block
-(double)attackTime;
-(double)decayTime;
-(double)sustainTime;
-(double)releaseTime;
-(float)sustainAmplitude;
-(void)setAttackTime:(double)arg1 ;
-(void)setDecayTime:(double)arg1 ;
-(void)setSustainTime:(double)arg1 ;
-(void)setReleaseTime:(double)arg1 ;
-(void)setSustainAmplitude:(float)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

