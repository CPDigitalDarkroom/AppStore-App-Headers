/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTIAPRequestFactory.h>

@protocol SPTIAPRequestFactory <NSObject>
@required
-(id)createSpotifyProductRequest;
-(id)createItunesProductRequestForProductIdentifiers:(id)arg1;
-(id)createTransactionRequestForPayment:(id)arg1;
-(id)createProductActivationRequestWithReceiptData:(id)arg1;

@end


@class SKPaymentQueue, NSString;

@interface SPTIAPRequestFactory : NSObject <SPTIAPRequestFactory> {

	SKPaymentQueue* _paymentQueue;
	NSString* _applicationVersionString;

}

@property (nonatomic,retain) SKPaymentQueue * paymentQueue;                    //@synthesize paymentQueue=_paymentQueue - In the implementation block
@property (nonatomic,retain) NSString * applicationVersionString;              //@synthesize applicationVersionString=_applicationVersionString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createSpotifyProductRequest;
-(id)createItunesProductRequestForProductIdentifiers:(id)arg1 ;
-(NSString *)applicationVersionString;
-(id)createTransactionRequestForPayment:(id)arg1 ;
-(id)createProductActivationRequestWithReceiptData:(id)arg1 ;
-(SKPaymentQueue *)paymentQueue;
-(void)setPaymentQueue:(SKPaymentQueue *)arg1 ;
-(id)initWithPaymentQueue:(id)arg1 applicationVersionString:(id)arg2 ;
-(void)setApplicationVersionString:(NSString *)arg1 ;
@end

