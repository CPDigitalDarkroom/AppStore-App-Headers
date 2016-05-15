/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNPeopleDiscoveryModuleLayout.h>
#import <Twitter/TFNPeopleDiscoveryPickerModuleLayout.h>
@class NSArray;


@protocol TFNPeopleDiscoveryPickerModuleLayout <TFNPeopleDiscoveryModuleLayout>
@property (nonatomic,copy,readonly) NSArray * callsToAction; 
@required
-(NSArray *)callsToAction;

@end


@class NSArray, NSString;

@interface TFNPeopleDiscoveryPickerModuleLayout : TFNPeopleDiscoveryModuleLayout <TFNPeopleDiscoveryPickerModuleLayout> {

	NSArray* _callsToAction;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNPeopleDiscoveryModuleLayoutHeader> header; 
@property (nonatomic,__weak,readonly) id<TFNPeopleDiscoveryModule> module; 
@property (nonatomic,copy,readonly) NSArray * callsToAction;                                 //@synthesize callsToAction=_callsToAction - In the implementation block
-(NSArray *)callsToAction;
-(id)initWithModuleLayoutHeader:(id)arg1 ;
-(id)initWithModuleLayoutHeader:(id)arg1 callsToAction:(id)arg2 ;
-(id)init;
@end

