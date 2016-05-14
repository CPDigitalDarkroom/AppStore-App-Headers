/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPeerToPeerSendFlowControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageDetectedDataHandling.h>

@class NSString, NSDecimalNumber, FBMUser, FBMGroupThreadKey, FBPaymentsPeerToPeerSendFlowController, MNPaymentsFlowSessionController, NSMutableDictionary;

@interface FBPaymentsPeerToPeerMessageDetectedDataHandler : NSObject <FBPaymentsPeerToPeerSendFlowControllerDelegate, MNMessageDetectedDataHandling> {

	NSString* _localizedTitle;
	NSDecimalNumber* _initialAmount;
	FBMUser* _recipient;
	FBMGroupThreadKey* _groupThreadKey;
	int _peopleCountInThread;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	MNPaymentsFlowSessionController* _flowSessionController;
	NSMutableDictionary* _completionBlockForAttachment;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) int handlerType; 
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2 ;
-(void)_dispatchHandlingResult:(id)arg1 forPaymentAttachmentWithAnalyticsUUID:(id)arg2 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 recipient:(id)arg2 initialAmount:(id)arg3 groupThreadKey:(id)arg4 peopleCountInThread:(int)arg5 sendFlowController:(id)arg6 flowSessionController:(id)arg7 ;
-(NSString *)localizedTitle;
-(int)handlerType;
@end

