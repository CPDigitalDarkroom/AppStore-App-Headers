/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBResponseHandling.h>

@protocol FBImageDownloaderCache, FBRequest, FBResponseHandlerDelegate, FBStreamingImageResponseHandlerDelegate;
@class FBProgressiveJPEG, NSURL, NSData, NSString;

@interface FBStreamingImageResponseHandler : NSObject <FBResponseHandling> {

	id<FBImageDownloaderCache> _imageCache;
	FBProgressiveJPEG* _jpeg;
	NSURL* _url;
	NSData* _partialData;
	int _contentLength;
	char _reachedLastImageFlag;
	char _needCachePartialData;
	char _sentFinalResponse;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;
	id<FBStreamingImageResponseHandlerDelegate> _streamingDelegate;

}

@property (assign,nonatomic,__weak) id<FBStreamingImageResponseHandlerDelegate> streamingDelegate;              //@synthesize streamingDelegate=_streamingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
+(id)getBestImageForPartialData:(id)arg1 desiredFlag:(unsigned)arg2 ;
+(id)copyImageWithNewImageFlag:(id)arg1 imageFlag:(unsigned)arg2 lastImageFlag:(char)arg3 ;
-(id)initWithRequest:(id)arg1 url:(id)arg2 partialData:(id)arg3 contentLength:(int)arg4 imageCache:(id)arg5 ;
-(void)setStreamingDelegate:(id<FBStreamingImageResponseHandlerDelegate>)arg1 ;
-(void)cachePartialDataIfNeeded;
-(id<FBStreamingImageResponseHandlerDelegate>)streamingDelegate;
-(void)handleData:(id)arg1 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)abort;
@end

