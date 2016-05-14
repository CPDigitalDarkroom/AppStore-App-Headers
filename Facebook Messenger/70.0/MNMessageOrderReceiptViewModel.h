/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNCommerceHeaderViewModel, NSString, MNCommerceListViewModel, MNBusinessTableRowViewModel;

@interface MNMessageOrderReceiptViewModel : FBValueObject <NSCopying> {

	MNCommerceHeaderViewModel* _header;
	NSString* _receiptID;
	NSString* _bubbleStyle;
	unsigned _type;
	MNCommerceListViewModel* _itemList;
	NSString* _paymentMethod;
	NSString* _address;
	MNBusinessTableRowViewModel* _footer;
	NSString* _senderID;

}

@property (nonatomic,copy,readonly) MNCommerceHeaderViewModel * header;                //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * receiptID;                              //@synthesize receiptID=_receiptID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleStyle;                            //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,readonly) unsigned type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceListViewModel * itemList;                //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentMethod;                          //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * address;                                //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowViewModel * footer;              //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderID;                               //@synthesize senderID=_senderID - In the implementation block
-(NSString *)bubbleStyle;
-(id)initWithHeader:(id)arg1 receiptID:(id)arg2 bubbleStyle:(id)arg3 type:(unsigned)arg4 itemList:(id)arg5 paymentMethod:(id)arg6 address:(id)arg7 footer:(id)arg8 senderID:(id)arg9 ;
-(NSString *)receiptID;
-(NSString *)address;
-(unsigned)type;
-(NSString *)senderID;
-(MNCommerceHeaderViewModel *)header;
-(MNBusinessTableRowViewModel *)footer;
-(NSString *)paymentMethod;
-(MNCommerceListViewModel *)itemList;
@end

