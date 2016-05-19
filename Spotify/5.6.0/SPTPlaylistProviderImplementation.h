/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPlaylistProvider.h>

@class SPSession, SPPlaylistContainer, NSString;

@interface SPTPlaylistProviderImplementation : NSObject <SPTPlaylistProvider> {

	SPSession* _session;
	SPPlaylistContainer* _treeContainer;

}

@property (assign,nonatomic,__weak) SPSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer * treeContainer;              //@synthesize treeContainer=_treeContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPPlaylistContainer *)treeContainer;
-(id)localFiles;
-(void)setTreeContainer:(SPPlaylistContainer *)arg1 ;
-(id)allPlaylists;
-(id)initWithSession:(id)arg1 ;
-(SPSession *)session;
-(void)setSession:(SPSession *)arg1 ;
@end

