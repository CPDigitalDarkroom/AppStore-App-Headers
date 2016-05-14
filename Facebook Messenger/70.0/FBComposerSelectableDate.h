/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerEventDate, NSString;

@interface FBComposerSelectableDate : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	FBComposerEventDate* _eventStartDate;
	FBComposerEventDate* _eventEndDate;
	FBComposerEventDate* _earliestDateAllowed;

}

@property (nonatomic,copy,readonly) FBComposerEventDate * eventStartDate;                   //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEventDate * eventEndDate;                     //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEventDate * earliestDateAllowed;              //@synthesize earliestDateAllowed=_earliestDateAllowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 earliestDateAllowed:(id)arg3 ;
-(FBComposerEventDate *)earliestDateAllowed;
-(FBComposerEventDate *)eventEndDate;
-(FBComposerEventDate *)eventStartDate;
-(id)shallowCopy;
@end

