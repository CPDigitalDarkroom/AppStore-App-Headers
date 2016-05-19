/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTAbbaFeatureFlags, SPTAudioDriverController;
@class SPTDataLoaderFactory, NSHashTable;

@interface SPTTouchAudioEngine : NSObject {

	SPTDataLoaderFactory* _dataLoaderFactory;
	id<SPTAbbaFeatureFlags> _featureFlags;
	unsigned _preloadByteSize;
	id<SPTAudioDriverController> _audioDriverController;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) SPTDataLoaderFactory * dataLoaderFactory;                             //@synthesize dataLoaderFactory=_dataLoaderFactory - In the implementation block
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> featureFlags;                                 //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,readonly) unsigned preloadByteSize;                                             //@synthesize preloadByteSize=_preloadByteSize - In the implementation block
@property (assign,nonatomic,__weak) id<SPTAudioDriverController> audioDriverController;              //@synthesize audioDriverController=_audioDriverController - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                //@synthesize observers=_observers - In the implementation block
-(void)setAudioDriverController:(id<SPTAudioDriverController>)arg1 ;
-(SPTDataLoaderFactory *)dataLoaderFactory;
-(id<SPTAudioDriverController>)audioDriverController;
-(id<SPTAbbaFeatureFlags>)featureFlags;
-(id)createSampleWithURL:(id)arg1 ;
-(void)notifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDataLoaderFactory:(id)arg1 featureFlags:(id)arg2 ;
-(unsigned)preloadByteSize;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

