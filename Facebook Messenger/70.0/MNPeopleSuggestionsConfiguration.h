/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, MNPeopleCellActionButtonConfiguration;

@interface MNPeopleSuggestionsConfiguration : FBValueObject <NSCopying> {

	NSArray* _topSuggestedContacts;
	NSString* _topSuggestedContactsSectionTitle;
	MNPeopleCellActionButtonConfiguration* _actionButtonConfiguration;

}

@property (nonatomic,copy,readonly) NSArray * topSuggestedContacts;                                                 //@synthesize topSuggestedContacts=_topSuggestedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * topSuggestedContactsSectionTitle;                                    //@synthesize topSuggestedContactsSectionTitle=_topSuggestedContactsSectionTitle - In the implementation block
@property (nonatomic,copy,readonly) MNPeopleCellActionButtonConfiguration * actionButtonConfiguration;              //@synthesize actionButtonConfiguration=_actionButtonConfiguration - In the implementation block
-(id)initWithTopSuggestedContacts:(id)arg1 topSuggestedContactsSectionTitle:(id)arg2 actionButtonConfiguration:(id)arg3 ;
-(MNPeopleCellActionButtonConfiguration *)actionButtonConfiguration;
-(NSArray *)topSuggestedContacts;
-(NSString *)topSuggestedContactsSectionTitle;
@end

