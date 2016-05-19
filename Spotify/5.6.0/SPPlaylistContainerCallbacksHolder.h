/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class SPPlaylistContainer;

@interface SPPlaylistContainerCallbacksHolder : NSObject {

	SPPlaylistContainer* _playlists;
	SPPlaylistContainerCallbacks* _callbacks;

}

@property (assign,nonatomic) SPPlaylistContainer * playlists;                        //@synthesize playlists=_playlists - In the implementation block
@property (nonatomic,readonly) SPPlaylistContainerCallbacks* callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
-(SPPlaylistContainer *)playlists;
-(void)setPlaylists:(SPPlaylistContainer *)arg1 ;
-(id)initWithObjc:(id)arg1 ;
-(SPPlaylistContainerCallbacks*)callbacks;
-(void)dealloc;
@end

