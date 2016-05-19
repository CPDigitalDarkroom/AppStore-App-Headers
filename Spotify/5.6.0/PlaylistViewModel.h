/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPPopcountLookupDelegate.h>
#import <Spotify/SPTPlayerObserver.h>
#import <Spotify/SPTPlaylistExternalItemFilterDelegate.h>
#import <Spotify/SPTOfflineObserver.h>
#import <Spotify/SPTSponsoredContextViewModelDelegate.h>
#import <Spotify/SPTCollectionSorting.h>

@protocol PlaylistViewModelDelegate, SPTSponsoredContextViewModel, SPTTrackContextPlayer, SPTPlayer, SPTProductState, SPTCollectionSortingEntityManager, SPTUpsellManager, SPTPlaylistExternalItemFilter;
@class SPUser, SPTOfflineManager, NSDate, NSURL, SPPlaylistContainer, SPSession, SPTPlayerState, SPTrackContext, SPPlaylist, SPPopcountLookup, NSMutableDictionary, SPKVObservation, NSArray, NSString;

@interface PlaylistViewModel : NSObject <SPPopcountLookupDelegate, SPTPlayerObserver, SPTPlaylistExternalItemFilterDelegate, SPTOfflineObserver, SPTSponsoredContextViewModelDelegate, SPTCollectionSorting> {

	char _totalDurationLoaded;
	char _enableReportAbuse;
	char _playlistIsAllTracksInFolder;
	char _playlistIsLocalFiles;
	char _numberOfSubscribersLoaded;
	char _checkReportAbuse;
	char _hasRegisteredObservers;
	char _ascendingSortOrder;
	id<PlaylistViewModelDelegate> _delegate;
	SPUser* _playlistOwner;
	SPTOfflineManager* _offlineManager;
	NSDate* _playlistLastEditedDate;
	int _numberOfSubscribers;
	NSURL* _entityURL;
	SPPlaylistContainer* _folder;
	id<SPTSponsoredContextViewModel> _sponsoredContextViewModel;
	SPSession* _session;
	id<SPTTrackContextPlayer> _trackContextPlayer;
	id<SPTPlayer> _player;
	SPTPlayerState* _lastPlayerState;
	SPTrackContext* _context;
	SPPlaylist* _playlist;
	SPPlaylistContainer* _playlistContainer;
	SPPopcountLookup* _popcountLookup;
	NSMutableDictionary* _offlineObservations;
	SPKVObservation* _contextIsLoadedObservation;
	id<SPTProductState> _productState;
	unsigned _sortColumn;
	id<SPTCollectionSortingEntityManager> _sortingEntityManager;
	NSArray* _songItems;
	NSArray* _songItemsContextRowIndices;
	id<SPTUpsellManager> _upsellManager;
	id<SPTPlaylistExternalItemFilter> _externalItemFilter;
	double _totalDuration;

}

@property (assign,nonatomic,__weak) id<PlaylistViewModelDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) char loaded; 
@property (nonatomic,retain) SPUser * playlistOwner;                                                         //@synthesize playlistOwner=_playlistOwner - In the implementation block
@property (assign,nonatomic,__weak) SPTOfflineManager * offlineManager;                                      //@synthesize offlineManager=_offlineManager - In the implementation block
@property (nonatomic,retain) NSDate * playlistLastEditedDate;                                                //@synthesize playlistLastEditedDate=_playlistLastEditedDate - In the implementation block
@property (nonatomic,readonly) NSString * numberOfSubscribersText; 
@property (assign,nonatomic) int numberOfSubscribers;                                                        //@synthesize numberOfSubscribers=_numberOfSubscribers - In the implementation block
@property (assign,nonatomic) double totalDuration;                                                           //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) char totalDurationLoaded;                                                       //@synthesize totalDurationLoaded=_totalDurationLoaded - In the implementation block
@property (nonatomic,readonly) NSURL * entityURL;                                                            //@synthesize entityURL=_entityURL - In the implementation block
@property (nonatomic,readonly) NSURL * playlistImageURL; 
@property (nonatomic,readonly) NSString * playlistName; 
@property (nonatomic,readonly) NSString * playlistDescription; 
@property (nonatomic,readonly) NSString * descriptionForSpotlightIndex; 
@property (assign,nonatomic) char enableReportAbuse;                                                         //@synthesize enableReportAbuse=_enableReportAbuse - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer * folder;                                                   //@synthesize folder=_folder - In the implementation block
@property (assign,getter=isAvailableOffline,nonatomic) char availableOffline; 
@property (getter=isPlaylistIsCollaborative,nonatomic,readonly) char playlistIsCollaborative; 
@property (getter=isPlaylistPublished,nonatomic,readonly) char playlistPublished; 
@property (nonatomic,readonly) char playlistIsOwnedByCurrentUser; 
@property (nonatomic,readonly) char playlistCanBeEdited; 
@property (nonatomic,readonly) char playlistCanEditTrackOrder; 
@property (nonatomic,readonly) char playlistIsFollowedByCurrentUser; 
@property (nonatomic,readonly) char playlistIsAllTracksInFolder;                                             //@synthesize playlistIsAllTracksInFolder=_playlistIsAllTracksInFolder - In the implementation block
@property (nonatomic,readonly) char playlistIsLocalFiles;                                                    //@synthesize playlistIsLocalFiles=_playlistIsLocalFiles - In the implementation block
@property (nonatomic,retain) id<SPTSponsoredContextViewModel> sponsoredContextViewModel;                     //@synthesize sponsoredContextViewModel=_sponsoredContextViewModel - In the implementation block
@property (nonatomic,readonly) NSArray * playerTracks; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (assign,nonatomic,__weak) SPSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPTTrackContextPlayer> trackContextPlayer;                                   //@synthesize trackContextPlayer=_trackContextPlayer - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                                           //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTPlayerState * lastPlayerState;                                               //@synthesize lastPlayerState=_lastPlayerState - In the implementation block
@property (nonatomic,retain) SPTrackContext * context;                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SPPlaylist * playlist;                                                          //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer * playlistContainer;                                        //@synthesize playlistContainer=_playlistContainer - In the implementation block
@property (assign,nonatomic) char numberOfSubscribersLoaded;                                                 //@synthesize numberOfSubscribersLoaded=_numberOfSubscribersLoaded - In the implementation block
@property (assign,nonatomic) char checkReportAbuse;                                                          //@synthesize checkReportAbuse=_checkReportAbuse - In the implementation block
@property (nonatomic,retain) SPPopcountLookup * popcountLookup;                                              //@synthesize popcountLookup=_popcountLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * offlineObservations;                                      //@synthesize offlineObservations=_offlineObservations - In the implementation block
@property (assign,nonatomic) char hasRegisteredObservers;                                                    //@synthesize hasRegisteredObservers=_hasRegisteredObservers - In the implementation block
@property (nonatomic,retain) SPKVObservation * contextIsLoadedObservation;                                   //@synthesize contextIsLoadedObservation=_contextIsLoadedObservation - In the implementation block
@property (nonatomic,retain) id<SPTProductState> productState;                                               //@synthesize productState=_productState - In the implementation block
@property (assign,nonatomic) unsigned sortColumn;                                                            //@synthesize sortColumn=_sortColumn - In the implementation block
@property (assign,nonatomic) char ascendingSortOrder;                                                        //@synthesize ascendingSortOrder=_ascendingSortOrder - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCollectionSortingEntityManager> sortingEntityManager;              //@synthesize sortingEntityManager=_sortingEntityManager - In the implementation block
@property (nonatomic,retain) NSArray * songItems;                                                            //@synthesize songItems=_songItems - In the implementation block
@property (nonatomic,retain) NSArray * songItemsContextRowIndices;                                           //@synthesize songItemsContextRowIndices=_songItemsContextRowIndices - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTUpsellManager> upsellManager;                                    //@synthesize upsellManager=_upsellManager - In the implementation block
@property (nonatomic,retain) id<SPTPlaylistExternalItemFilter> externalItemFilter;                           //@synthesize externalItemFilter=_externalItemFilter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * supportedSortColumns; 
-(id<SPTProductState>)productState;
-(void)setProductState:(id<SPTProductState>)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3 ;
-(void)sponsoredContextViewModelDidUpdate:(id)arg1 ;
-(id<SPTTrackContextPlayer>)trackContextPlayer;
-(void)setTrackContextPlayer:(id<SPTTrackContextPlayer>)arg1 ;
-(SPTOfflineManager *)offlineManager;
-(void)offlineStateChangedForEntity:(id)arg1 ;
-(NSString *)descriptionForSpotlightIndex;
-(void)setOfflineManager:(SPTOfflineManager *)arg1 ;
-(id<SPTUpsellManager>)upsellManager;
-(NSURL *)entityURL;
-(NSArray *)playerTracks;
-(void)setExternalItemFilter:(id<SPTPlaylistExternalItemFilter>)arg1 ;
-(void)updateSongItems;
-(void)setSortColumn:(unsigned)arg1 ;
-(void)setSongItems:(NSArray *)arg1 ;
-(NSArray *)songItems;
-(unsigned)offlineAvailability;
-(void)setOfflineObservations:(NSMutableDictionary *)arg1 ;
-(id<SPTPlaylistExternalItemFilter>)externalItemFilter;
-(char)ascendingSortOrder;
-(void)setAscendingSortOrder:(char)arg1 ;
-(void)externalItemFilterDidChange:(id)arg1 ;
-(NSMutableDictionary *)offlineObservations;
-(NSArray *)supportedSortColumns;
-(unsigned)sortColumn;
-(void)setSortOrderWithColumn:(unsigned)arg1 ascending:(char)arg2 ;
-(id)contextMetadata;
-(char)isAvailableOffline;
-(void)setAvailableOffline:(char)arg1 ;
-(void)contextTracksDidChange;
-(SPTPlayerState *)lastPlayerState;
-(void)setLastPlayerState:(SPTPlayerState *)arg1 ;
-(id<SPTCollectionSortingEntityManager>)sortingEntityManager;
-(void)setSortingEntityManager:(id<SPTCollectionSortingEntityManager>)arg1 ;
-(void)playTrackURL:(id)arg1 ;
-(char)playlistIsAllTracksInFolder;
-(id<SPTSponsoredContextViewModel>)sponsoredContextViewModel;
-(char)playlistIsFollowedByCurrentUser;
-(NSURL *)playlistImageURL;
-(NSString *)playlistName;
-(char)totalDurationLoaded;
-(void)updateFollowerCount;
-(char)isPlayingIndexPath:(id)arg1 ;
-(NSString *)playlistDescription;
-(SPUser *)playlistOwner;
-(NSDate *)playlistLastEditedDate;
-(NSString *)numberOfSubscribersText;
-(char)playlistIsOwnedByCurrentUser;
-(void)setTextFilter:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(char)playlistIsLocalFiles;
-(void)followPlaylist:(char)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)playWithShuffle:(char)arg1 ;
-(char)playlistCanBeEdited;
-(char)isPlaylistIsCollaborative;
-(char)isPlaylistPublished;
-(char)enableReportAbuse;
-(int)offlineSyncStatusForIndexPath:(id)arg1 ;
-(void)removePlaylist;
-(void)renamePlaylist:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)publishPlaylist:(char)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)makePlaylistCollaborative:(char)arg1 onCompletion:(/*^block*/id)arg2 ;
-(char)playlistCanEditTrackOrder;
-(void)moveTrackAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(void)removeTrackAtIndex:(unsigned)arg1 ;
-(void)setUpReportAbuse:(id)arg1 ;
-(void)metadataDidChange;
-(SPKVObservation *)contextIsLoadedObservation;
-(void)endOfflineObservations;
-(void)contextDidLoad;
-(void)setContextIsLoadedObservation:(SPKVObservation *)arg1 ;
-(char)hasRegisteredObservers;
-(void)setHasRegisteredObservers:(char)arg1 ;
-(void)hideUnplayableTracksSettingDidChange;
-(SPPopcountLookup *)popcountLookup;
-(void)logUserHitClientEventWithEventVersion:(id)arg1 ;
-(unsigned)contextRowIndexFromSongItemIndex:(unsigned)arg1 ;
-(void)setPlaylistLastEditedDate:(NSDate *)arg1 ;
-(void)setTotalDurationLoaded:(char)arg1 ;
-(void)beginOfflineObservations;
-(void)updateEnableReportAbuse;
-(void)setPopcountLookup:(SPPopcountLookup *)arg1 ;
-(void)setNumberOfSubscribers:(int)arg1 ;
-(void)setNumberOfSubscribersLoaded:(char)arg1 ;
-(char)numberOfSubscribersLoaded;
-(int)numberOfSubscribers;
-(id)playlistContext;
-(char)shouldHighlightTracks;
-(char)filterIsActive;
-(id)loggingSource;
-(void)setCheckReportAbuse:(char)arg1 ;
-(char)checkReportAbuse;
-(void)setEnableReportAbuse:(char)arg1 ;
-(char)isSubscribedToPlaylist:(id)arg1 ;
-(void)subscribeToPlaylist:(id)arg1 ;
-(char)sortingIsActive;
-(char)isFolderModel;
-(id)offlineStateObjectURL;
-(id)offlineStateObject;
-(void)changeOfflineAvailabilityForContainer:(id)arg1 offline:(char)arg2 ;
-(void)changeOfflineAvailabilityForEntityURLs:(id)arg1 offline:(char)arg2 ;
-(void)beginOfflineObservationsForEntities:(id)arg1 ;
-(id)ownerNameForTrackAtIndex:(unsigned)arg1 ;
-(void)setSongItemsContextRowIndices:(NSArray *)arg1 ;
-(NSArray *)songItemsContextRowIndices;
-(void)popCountLookup:(id)arg1 didFindSubscribers:(id)arg2 totalNumberOfSubscribers:(int)arg3 ;
-(void)popCountLookup:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithContext:(id)arg1 playlist:(id)arg2 folder:(id)arg3 container:(id)arg4 entityURL:(id)arg5 session:(id)arg6 trackContextPlayer:(id)arg7 player:(id)arg8 offlineManager:(id)arg9 popcountLookup:(id)arg10 sponsoredContextModel:(id)arg11 sortingEntityManager:(id)arg12 upsellManager:(id)arg13 externalItemFilter:(id)arg14 ;
-(char)isTrackEnabledAtRow:(unsigned)arg1 ;
-(void)setPlaylistOwner:(SPUser *)arg1 ;
-(void)setSponsoredContextViewModel:(id<SPTSponsoredContextViewModel>)arg1 ;
-(SPPlaylistContainer *)playlistContainer;
-(void)setPlaylistContainer:(SPPlaylistContainer *)arg1 ;
-(void)setupObservers;
-(SPSession *)session;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(void)setDelegate:(id<PlaylistViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id<PlaylistViewModelDelegate>)delegate;
-(int)numberOfItemsInSection:(int)arg1 ;
-(int)numberOfSections;
-(char)isEmpty;
-(SPTrackContext *)context;
-(void)viewDidLoad;
-(void)setContext:(SPTrackContext *)arg1 ;
-(char)isLoaded;
-(void)load;
-(void)setSession:(SPSession *)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(void)setPlaylist:(SPPlaylist *)arg1 ;
-(SPPlaylistContainer *)folder;
-(void)setFolder:(SPPlaylistContainer *)arg1 ;
-(SPPlaylist *)playlist;
-(id)itemAtIndexPath:(id)arg1 ;
@end

