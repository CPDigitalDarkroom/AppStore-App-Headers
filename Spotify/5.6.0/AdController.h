/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class SPSession, SPCore;

@interface AdController : NSObject {

	spotify_resolver* _ads_resolver;
	function<void (spotify_resolver *)>* _ads_resolver_deleter;
	shared_ptr<spotify::api::CResolverWrapper>* _ads_resolver_cpp;
	long _ads_resolver_registration_token;
	SPSession* _session;
	SPCore* _core;

}

@property (assign,nonatomic,__weak) SPSession * session;              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) SPCore * core;                    //@synthesize core=_core - In the implementation block
+(id)adControllerWithCore:(id)arg1 session:(id)arg2 ;
-(SPCore *)core;
-(id)initWithCore:(id)arg1 session:(id)arg2 ;
-(void)setCore:(SPCore *)arg1 ;
-(void)reportTrackURLClicked;
-(void)cleanupAdsResolverWithRouter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerAdsResolverWithRouter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(shared_ptr<spotify::ads::AdsCore>*)adsCore;
-(shared_ptr<spotify::ads::AdManagerInterface>*)adManager;
-(void)playAdFromLink:(id)arg1 ;
-(void)addStreamTime;
-(SPSession *)session;
-(void)setSession:(SPSession *)arg1 ;
@end

