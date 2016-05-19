/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>

@class SPTDataLoader, NSString;

@interface SPTGeniusProxyTrackEnabledChecker : NSObject <SPTDataLoaderDelegate> {

	SPTDataLoader* _dataLoader;

}

@property (nonatomic,retain) SPTDataLoader * dataLoader;              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(id)initWithDataLoaderFactory:(id)arg1 ;
-(void)checkTrackURI:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

