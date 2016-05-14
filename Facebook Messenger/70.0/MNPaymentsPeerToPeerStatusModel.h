/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView, MNPaymentsPeerToPeerStatusModelForReceipt, MNPaymentsTransferStatusModelForTransactionHistoryCell;

@interface MNPaymentsPeerToPeerStatusModel : FBValueObject <NSCopying> {

	FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView* _modelForPaymentAttachment;
	MNPaymentsPeerToPeerStatusModelForReceipt* _modelForReceipt;
	MNPaymentsTransferStatusModelForTransactionHistoryCell* _modelForTranscationHistoryCell;

}

@property (nonatomic,copy,readonly) FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView * modelForPaymentAttachment;              //@synthesize modelForPaymentAttachment=_modelForPaymentAttachment - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsPeerToPeerStatusModelForReceipt * modelForReceipt;                                              //@synthesize modelForReceipt=_modelForReceipt - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferStatusModelForTransactionHistoryCell * modelForTranscationHistoryCell;                  //@synthesize modelForTranscationHistoryCell=_modelForTranscationHistoryCell - In the implementation block
-(FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView *)modelForPaymentAttachment;
-(MNPaymentsPeerToPeerStatusModelForReceipt *)modelForReceipt;
-(MNPaymentsTransferStatusModelForTransactionHistoryCell *)modelForTranscationHistoryCell;
-(id)initWithModelForPaymentAttachment:(id)arg1 modelForReceipt:(id)arg2 modelForTranscationHistoryCell:(id)arg3 ;
@end

