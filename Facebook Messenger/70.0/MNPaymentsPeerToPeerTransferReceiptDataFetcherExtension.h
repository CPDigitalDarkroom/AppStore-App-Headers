/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsTransferReceiptDataFetcherExtension.h>

@protocol FBQueriedMessengerPaymentFieldsProtocol, MNPaymentsTransferReceiptDataFetcherExtensionDelegate;
@class FBPaymentsPeerToPeerFetchController, FBExponentialBackoffTimer, NSString;

@interface MNPaymentsPeerToPeerTransferReceiptDataFetcherExtension : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsTransferReceiptDataFetcherExtension> {

	id<FBQueriedMessengerPaymentFieldsProtocol> _messengerPayment;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBExponentialBackoffTimer* _failBackoffTimer;
	id _fetchToken;
	id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned)arg4 error:(id)arg5 ;
-(id)initWithFetchController:(id)arg1 ;
-(void)fetchContentWithMessengerPayment:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 withError:(id)arg2 ;
-(void)setDelegate:(id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate>)delegate;
@end

