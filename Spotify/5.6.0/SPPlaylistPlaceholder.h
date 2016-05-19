/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPOfflineStateProtocol.h>
#import <Spotify/SPPlaylistContainerItem.h>

@class NSString, SPPlaylistOfflineSyncStatus, NSURL;

@interface SPPlaylistPlaceholder : NSObject <SPOfflineStateProtocol, SPPlaylistContainerItem> {

	NSString* _freeformDescription;
	NSString* _imageIdent;
	char _collaborative;
	NSString* _name;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isAvailableOffline; 
@property (assign,nonatomic) char makeAvailableOffline; 
@property (nonatomic,readonly) int offlineState; 
@property (nonatomic,readonly) float offlineProgress; 
@property (nonatomic,readonly) SPPlaylistOfflineSyncStatus * offlineSyncStatus; 
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * link; 
@property (nonatomic,readonly) NSString * ownerCanonicalUsername; 
@property (nonatomic,readonly) unsigned nodeType; 
-(char)isStarred;
-(char)isInbox;
-(char)isLocalFiles;
-(char)isToplist;
-(int)offlineState;
-(id)freeformDescription;
-(unsigned)countOfTracks;
-(char)isOwnedBySelf;
-(NSString *)ownerCanonicalUsername;
-(char)isAvailableOffline;
-(SPPlaylistOfflineSyncStatus *)offlineSyncStatus;
-(id)objectInTracksAtIndex:(unsigned)arg1 ;
-(int)numberOfSubscribers;
-(id)userThatAddedTrackAtIndex:(unsigned)arg1 ;
-(void)setCollaborative:(char)arg1 ;
-(id)mutableTracks;
-(char)collaborative;
-(char)isWriteable;
-(float)offlineProgress;
-(char)makeAvailableOffline;
-(void)setMakeAvailableOffline:(char)arg1 ;
-(id)imageIdent;
-(int)observedChangeSource;
-(id)observedAttributeChangeKey;
-(void)setFreeformDescription:(id)arg1 ;
-(void)setImageIdent:(id)arg1 ;
-(char)isSeparator;
-(char)isSubscribable;
-(void)insertObject:(id)arg1 inTracksAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromTracksAtIndex:(unsigned)arg1 ;
-(id)dateAddedForTrackAtIndex:(unsigned)arg1 ;
-(void)setTrackCreationTimeWithInternalSource:(id)arg1 userThatAddedTrack:(id)arg2 forTrackAtIndex:(unsigned)arg3 ;
-(id)messageForTrackAtIndex:(unsigned)arg1 ;
-(void)setMessage:(id)arg1 forTrackAtIndex:(unsigned)arg2 ;
-(char)trackIsSeenAtIndex:(unsigned)arg1 ;
-(void)setTrackIsSeen:(char)arg1 atIndex:(unsigned)arg2 ;
-(id)attributeForKey:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setValue:(id)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3 ;
-(id)attributeKeysAtIndex:(unsigned)arg1 ;
-(unsigned)countOfTracksCached;
-(id)objectInSubscribersAtIndex:(unsigned)arg1 ;
-(id)subscribersAtIndexes:(id)arg1 ;
-(int)countOfSubscribers;
-(void)updateSubscribers;
-(char)hasPlayableContentWhenOnline;
-(char)hasPlayableContentWhenOffline;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)isLoading;
-(unsigned)nodeType;
-(NSURL *)link;
-(id)subscribers;
-(id)delegates;
@end

