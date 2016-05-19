/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTOfflineModeStateObserver.h>
#import <Spotify/SPTPlaylistAdditionalSection.h>
#import <Spotify/SPTPlaylistExternalItemFilter.h>

@protocol SPTPlaylistAdditionalSectionDelegate, SPTPlaylistExternalItemFilterDelegate, SPTProductState, SPTOfflineModeState, SPTCollectionCacheplayTestManager;
@class SPTrackContext, NSURL, SPSession, NSArray, NSString;

@interface SPTPlaylistCacheplayAdditionalSection : NSObject <SPTOfflineModeStateObserver, SPTPlaylistAdditionalSection, SPTPlaylistExternalItemFilter> {

	id<SPTPlaylistAdditionalSectionDelegate> _delegate;
	id<SPTPlaylistExternalItemFilterDelegate> _filterDelegate;
	SPTrackContext* _context;
	NSURL* _entityURL;
	id<SPTProductState> _productState;
	id<SPTOfflineModeState> _offlineState;
	SPSession* _session;
	id<SPTCollectionCacheplayTestManager> _cacheplayTestManager;
	NSArray* _unavailableItems;

}

@property (nonatomic,readonly) SPTrackContext * context;                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSURL * entityURL;                                                            //@synthesize entityURL=_entityURL - In the implementation block
@property (assign,nonatomic,__weak) id<SPTProductState> productState;                                        //@synthesize productState=_productState - In the implementation block
@property (assign,nonatomic,__weak) id<SPTOfflineModeState> offlineState;                                    //@synthesize offlineState=_offlineState - In the implementation block
@property (nonatomic,__weak,readonly) SPSession * session;                                                   //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCollectionCacheplayTestManager> cacheplayTestManager;              //@synthesize cacheplayTestManager=_cacheplayTestManager - In the implementation block
@property (nonatomic,retain) NSArray * unavailableItems;                                                     //@synthesize unavailableItems=_unavailableItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * mainSectionTitle; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (assign,nonatomic,__weak) id<SPTPlaylistAdditionalSectionDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPlaylistExternalItemFilterDelegate> filterDelegate;                //@synthesize filterDelegate=_filterDelegate - In the implementation block
-(id<SPTProductState>)productState;
-(void)setProductState:(id<SPTProductState>)arg1 ;
-(void)offlineModeState:(id)arg1 updated:(char)arg2 ;
-(id<SPTOfflineModeState>)offlineState;
-(void)setOfflineState:(id<SPTOfflineModeState>)arg1 ;
-(NSURL *)entityURL;
-(id<SPTCollectionCacheplayTestManager>)cacheplayTestManager;
-(void)setCacheplayTestManager:(id<SPTCollectionCacheplayTestManager>)arg1 ;
-(void)setFilterDelegate:(id<SPTPlaylistExternalItemFilterDelegate>)arg1 ;
-(NSString *)mainSectionTitle;
-(char)filterItem:(id)arg1 ;
-(id<SPTPlaylistExternalItemFilterDelegate>)filterDelegate;
-(void)contextTracksDidChange;
-(id)cellForIndex:(unsigned)arg1 forTableView:(id)arg2 ;
-(id)initWithContext:(id)arg1 entityURL:(id)arg2 productState:(id)arg3 offlineState:(id)arg4 session:(id)arg5 cacheplayTestManager:(id)arg6 ;
-(char)isTestEnabled;
-(NSArray *)unavailableItems;
-(void)setUnavailableItems:(NSArray *)arg1 ;
-(void)setupObservers;
-(SPSession *)session;
-(void)setDelegate:(id<SPTPlaylistAdditionalSectionDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTPlaylistAdditionalSectionDelegate>)delegate;
-(NSString *)title;
-(char)isEnabled;
-(SPTrackContext *)context;
-(unsigned)numberOfItems;
-(char)didSelectItemAtIndex:(unsigned)arg1 ;
-(id)itemAtIndex:(unsigned)arg1 ;
@end

