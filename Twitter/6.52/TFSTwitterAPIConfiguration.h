/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPIConfiguration.h>

@protocol TFSTwitterAPIConfiguration <NSObject>
@property (nonatomic,readonly) id<TFSTwitterAPIURLBaseProvider> URLBaseProvider; 
@required
-(id<TFSTwitterAPIURLBaseProvider>)URLBaseProvider;
-(id)statusParametersDictionary;
-(id)userParametersDictionary;
-(id)cardsParametersDictionary;
-(id)momentsParametersDictionary;

@end


@protocol TFSTwitterAPIURLBaseProvider;
@class NSString, NSDictionary;

@interface TFSTwitterAPIConfiguration : NSObject <TFSTwitterAPIConfiguration> {

	NSString* _cardsPlatformIdentifier;
	NSDictionary* _extendedStatusParametersDictionary;
	id<TFSTwitterAPIURLBaseProvider> _URLBaseProvider;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFSTwitterAPIURLBaseProvider> URLBaseProvider;              //@synthesize URLBaseProvider=_URLBaseProvider - In the implementation block
-(id<TFSTwitterAPIURLBaseProvider>)URLBaseProvider;
-(id)initWithCardsPlatformIdentifier:(id)arg1 URLBaseProvider:(id)arg2 extendedStatusParametersDictionary:(id)arg3 ;
-(id)statusParametersDictionary;
-(id)userParametersDictionary;
-(id)cardsParametersDictionary;
-(id)momentsParametersDictionary;
-(id)init;
@end

