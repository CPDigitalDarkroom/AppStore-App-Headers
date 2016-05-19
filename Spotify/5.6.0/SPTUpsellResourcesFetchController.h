/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>

@protocol SPTUpsellResourcesFetchControllerDelegate;
@class SPTDataLoader, NSString;

@interface SPTUpsellResourcesFetchController : NSObject <SPTDataLoaderDelegate> {

	id<SPTUpsellResourcesFetchControllerDelegate> _delegate;
	SPTDataLoader* _dataLoader;
	unsigned _activeFetches;

}

@property (assign,nonatomic,__weak) id<SPTUpsellResourcesFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFetching,nonatomic,readonly) char fetching; 
@property (nonatomic,readonly) SPTDataLoader * dataLoader;                                               //@synthesize dataLoader=_dataLoader - In the implementation block
@property (assign,nonatomic) unsigned activeFetches;                                                     //@synthesize activeFetches=_activeFetches - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataLoader:(id)arg1 ;
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(int)resourceTypeForRequest:(id)arg1 ;
-(id)fetchResourceAtURL:(id)arg1 type:(int)arg2 ;
-(id)requestForURL:(id)arg1 type:(int)arg2 ;
-(void)incrementActiveFetches;
-(unsigned)activeFetches;
-(void)setActiveFetches:(unsigned)arg1 ;
-(void)decrementActiveFetches;
-(void)cleanupAfterResponse;
-(void)cancelAllFetches;
-(void)setDelegate:(id<SPTUpsellResourcesFetchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTUpsellResourcesFetchControllerDelegate>)delegate;
-(char)isFetching;
@end

