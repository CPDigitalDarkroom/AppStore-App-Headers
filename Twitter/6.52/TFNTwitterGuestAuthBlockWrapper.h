/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TFNTwitterGuestAuthBlockWrapper : NSObject {

	/*^block*/id _requestCreatedBlock;
	/*^block*/id _responseBlock;

}

@property (nonatomic,copy) id requestCreatedBlock;              //@synthesize requestCreatedBlock=_requestCreatedBlock - In the implementation block
@property (nonatomic,copy) id responseBlock;                    //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,readonly) char isValid; 
-(id)initWithRequestCreatedBlock:(/*^block*/id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)requestCreatedBlock;
-(void)setRequestCreatedBlock:(id)arg1 ;
-(id)responseBlock;
-(id)init;
-(char)isValid;
-(void)setResponseBlock:(id)arg1 ;
@end

