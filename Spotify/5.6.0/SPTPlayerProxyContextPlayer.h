/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@interface SPTPlayerProxyContextPlayer : NSObject {

	shared_ptr<spotify::player::ProxyContextPlayer>* _proxyContextPlayer;

}

@property (getter=isLocalPlaybackEnabled,nonatomic,readonly) char localPlaybackEnabled; 
-(char)isLocalPlaybackEnabled;
-(id)initWithProxyContextPlayer:(shared_ptr<spotify::player::ProxyContextPlayer>*)arg1 ;
@end

