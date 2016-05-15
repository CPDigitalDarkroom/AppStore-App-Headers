/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFSTwitterAPICommandCancelling;
@class TNLRequestOperation, TIPImageFetchOperation;

@interface TFNFoundMediaFetchOperation : NSObject {

	TNLRequestOperation* _requestOperation;
	TIPImageFetchOperation* _imageFetchOperation;
	id<TFSTwitterAPICommandCancelling> _cancellableCommandOperation;

}

@property (nonatomic,readonly) TNLRequestOperation * requestOperation;                                      //@synthesize requestOperation=_requestOperation - In the implementation block
@property (nonatomic,readonly) TIPImageFetchOperation * imageFetchOperation;                                //@synthesize imageFetchOperation=_imageFetchOperation - In the implementation block
@property (nonatomic,readonly) id<TFSTwitterAPICommandCancelling> cancellableCommandOperation;              //@synthesize cancellableCommandOperation=_cancellableCommandOperation - In the implementation block
+(void)cancelFetchOperation:(id)arg1 ;
-(TIPImageFetchOperation *)imageFetchOperation;
-(TNLRequestOperation *)requestOperation;
-(id<TFSTwitterAPICommandCancelling>)cancellableCommandOperation;
-(id)initWithImageFetchOperation:(id)arg1 ;
-(id)initWithCancellableCommandOperation:(id)arg1 ;
-(id)initWithRequestOperation:(id)arg1 ;
@end

