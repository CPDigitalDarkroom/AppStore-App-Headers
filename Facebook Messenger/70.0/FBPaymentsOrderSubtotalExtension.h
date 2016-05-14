/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsOrderSummaryExtension.h>

@protocol FBPaymentsOrderSummaryExtensionDataSource, FBPaymentsOrderSummaryExtensionDelegate;
@class NSString;

@interface FBPaymentsOrderSubtotalExtension : NSObject <FBPaymentsOrderSummaryExtension> {

	id<FBPaymentsOrderSummaryExtensionDataSource> _dataSource;
	id<FBPaymentsOrderSummaryExtensionDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsOrderSummaryExtensionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsOrderSummaryExtensionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)extensionIdentifier;
-(id)placeholderText;
-(void)setDataSource:(id<FBPaymentsOrderSummaryExtensionDataSource>)arg1 ;
-(void)setDelegate:(id<FBPaymentsOrderSummaryExtensionDelegate>)arg1 ;
-(id<FBPaymentsOrderSummaryExtensionDataSource>)dataSource;
-(id<FBPaymentsOrderSummaryExtensionDelegate>)delegate;
-(id)title;
-(id)amount;
-(int)status;
@end

