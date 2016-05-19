/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPartyTracksLoaderDelegate.h>

@class SPTPlayerContext, SPTPartyParameters, NSHashTable, SPTPartyTracksLoader, SPTPartyPreset, NSArray, NSString;

@interface SPTPartyTrackManager : NSObject <SPTPartyTracksLoaderDelegate> {

	SPTPlayerContext* _context;
	SPTPartyParameters* _partyParameters;
	NSHashTable* _observers;
	SPTPartyTracksLoader* _tracksLoader;
	SPTPartyPreset* _preset;
	int _energyLevel;
	NSArray* _nearbyUsernames;

}

@property (nonatomic,copy) SPTPlayerContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SPTPartyParameters * partyParameters;              //@synthesize partyParameters=_partyParameters - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SPTPartyTracksLoader * tracksLoader;               //@synthesize tracksLoader=_tracksLoader - In the implementation block
@property (nonatomic,retain) SPTPartyPreset * preset;                           //@synthesize preset=_preset - In the implementation block
@property (assign,nonatomic) int energyLevel;                                   //@synthesize energyLevel=_energyLevel - In the implementation block
@property (nonatomic,retain) NSArray * nearbyUsernames;                         //@synthesize nearbyUsernames=_nearbyUsernames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTracksLoader:(id)arg1 ;
-(void)loadTracksForMixifySetWithIdentifier:(id)arg1 ;
-(void)setEnergyLevel:(int)arg1 ;
-(void)loadTracksWithIntent:(id)arg1 ;
-(SPTPartyParameters *)partyParameters;
-(int)energyLevel;
-(void)setNearbyUsernames:(NSArray *)arg1 ;
-(void)setPartyParameters:(SPTPartyParameters *)arg1 ;
-(SPTPartyTracksLoader *)tracksLoader;
-(void)updatePartyParameters;
-(NSArray *)nearbyUsernames;
-(void)tracksLoader:(id)arg1 startedLoadingWithIntent:(id)arg2 ;
-(void)tracksLoader:(id)arg1 didLoadContext:(id)arg2 intent:(id)arg3 ;
-(void)tracksLoader:(id)arg1 didFailToLoadTracksWithError:(id)arg2 intent:(id)arg3 ;
-(void)setTracksLoader:(SPTPartyTracksLoader *)arg1 ;
-(SPTPartyPreset *)preset;
-(void)setPreset:(SPTPartyPreset *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SPTPlayerContext *)context;
-(void)setContext:(SPTPlayerContext *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

