/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBResponseProcessorDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBReceivedDataBufferDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBResponseHandling.h>

@protocol FBDataDeserializing, FBRequest, FBResponseHandlerDelegate;
@class FBResponseProcessor, FBResponseProcessorConfiguration, NSHTTPURLResponse, FBReceivedDataMemoryBuffer, NSString;

@interface FBJSONResponseHandler : NSObject <FBResponseProcessorDelegate, FBReceivedDataBufferDelegate, FBResponseHandling> {

	FBResponseProcessor* _processor;
	FBResponseProcessorConfiguration* _configuration;
	id<FBDataDeserializing> _dataDeserializer;
	NSHTTPURLResponse* _HTTPURLResponse;
	FBReceivedDataMemoryBuffer* _receivedDataBuffer;
	char _useResponseContainer;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (nonatomic,readonly) char useResponseContainer;                                //@synthesize useResponseContainer=_useResponseContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 expectedResponseClasses:(int)arg3 ;
-(void)responseProcessor:(id)arg1 didProcessResponse:(id)arg2 ;
-(void)responseProcessor:(id)arg1 didFailWithError:(id)arg2 ;
-(char)useResponseContainer;
-(void)handleData:(id)arg1 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)abort;
@end

