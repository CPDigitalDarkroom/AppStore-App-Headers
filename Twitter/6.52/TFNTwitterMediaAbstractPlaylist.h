/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TNLRequestDelegate.h>

@class TNLRequestOperation, NSURL, NSError, NSString;

@interface TFNTwitterMediaAbstractPlaylist : NSObject <TNLRequestDelegate> {

	TNLRequestOperation* _operation;
	char _loaded;
	char _loading;
	NSURL* _url;
	NSError* _error;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char loaded;                         //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) char loading;                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id responseHandler;                      //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userAgentString;
-(void)requestInstance;
-(id)processResponse:(id)arg1 ;
-(id)mutableRequest;
-(id)completionQueueForRequestOperation:(id)arg1 ;
-(void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(NSError *)error;
-(char)loaded;
-(void)dealloc;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)cancelRequest;
-(void)_cancelRequest:(id)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(char)loading;
@end

