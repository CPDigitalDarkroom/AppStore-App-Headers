/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>
#import <Spotify/FollowModelObserver.h>
#import <Spotify/SPTOfflineModeStateObserver.h>

@protocol SPTArtistVolatileViewModelDelegate, FollowFeature, SPTOfflineModeState;
@class FollowModel, NSURL, SPTDataLoader, SPTArtistVolatileData, NSString;

@interface SPTArtistVolatileViewModel : NSObject <SPTDataLoaderDelegate, FollowModelObserver, SPTOfflineModeStateObserver> {

	char _loading;
	id<SPTArtistVolatileViewModelDelegate> _delegate;
	FollowModel* _followModel;
	NSURL* _artistURL;
	SPTDataLoader* _dataLoader;
	SPTArtistVolatileData* _data;
	id<FollowFeature> _followFeature;
	id<SPTOfflineModeState> _offlineModeState;

}

@property (assign,nonatomic,__weak) id<SPTArtistVolatileViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FollowModel * followModel;                                           //@synthesize followModel=_followModel - In the implementation block
@property (nonatomic,retain) NSURL * artistURL;                                                   //@synthesize artistURL=_artistURL - In the implementation block
@property (nonatomic,retain) SPTDataLoader * dataLoader;                                          //@synthesize dataLoader=_dataLoader - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                       //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) SPTArtistVolatileData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) id<FollowFeature> followFeature;                              //@synthesize followFeature=_followFeature - In the implementation block
@property (nonatomic,retain) id<SPTOfflineModeState> offlineModeState;                            //@synthesize offlineModeState=_offlineModeState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTOfflineModeState>)offlineModeState;
-(void)offlineModeState:(id)arg1 updated:(char)arg2 ;
-(void)setOfflineModeState:(id<SPTOfflineModeState>)arg1 ;
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(NSURL *)artistURL;
-(void)setFollowFeature:(id<FollowFeature>)arg1 ;
-(id<FollowFeature>)followFeature;
-(id)localizedFollowDataText;
-(FollowModel *)followModel;
-(void)setArtistURL:(NSURL *)arg1 ;
-(void)setFollowModel:(FollowModel *)arg1 ;
-(void)followModel:(id)arg1 followDataDidChange:(id)arg2 ;
-(void)followModel:(id)arg1 updateDidFailWithError:(id)arg2 ;
-(id)initWithArtistURL:(id)arg1 dataLoader:(id)arg2 offlineModeState:(id)arg3 followFeature:(id)arg4 ;
-(void)setDelegate:(id<SPTArtistVolatileViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTArtistVolatileViewModelDelegate>)delegate;
-(SPTArtistVolatileData *)data;
-(void)setData:(SPTArtistVolatileData *)arg1 ;
-(char)isLoading;
-(void)requestData;
-(void)setLoading:(char)arg1 ;
@end

