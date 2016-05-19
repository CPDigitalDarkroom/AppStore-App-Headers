/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SKProductsRequestDelegate.h>

@class SKPaymentTransaction, SKProductsRequest, NSString;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate> {

	SKPaymentTransaction* _transaction;
	SKProductsRequest* _productRequest;

}

@property (nonatomic,retain) SKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) SKProductsRequest * productRequest;              //@synthesize productRequest=_productRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setProductRequest:(SKProductsRequest *)arg1 ;
-(SKProductsRequest *)productRequest;
-(void)resolveProducts;
-(id)getTruncatedString:(id)arg1 ;
-(void)logImplicitPurchaseEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
-(void)logTransactionEvent:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)cleanUp;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
@end

