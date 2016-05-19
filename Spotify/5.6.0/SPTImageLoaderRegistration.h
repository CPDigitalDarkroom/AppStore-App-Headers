/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTImageLoaderRequestFactory;
@interface SPTImageLoaderRegistration : NSObject {

	id<SPTImageLoaderRequestFactory> _factory;
	/*^block*/id _predicate;

}

@property (nonatomic,readonly) id<SPTImageLoaderRequestFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                     //@synthesize predicate=_predicate - In the implementation block
-(id)initWithFactory:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(char)matches:(id)arg1 ;
-(id)init;
-(id)predicate;
-(id<SPTImageLoaderRequestFactory>)factory;
@end

