/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeoplePickerSearchBarViewControllerDelegate <NSObject>
@optional
-(void)peoplePickerSearchBarController:(id)arg1 didDeselectContact:(id)arg2;
-(float)containerTopContentInsetForPeoplePickerSearchBarViewController:(id)arg1;

@required
-(void)peoplePickerSearchBarController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(char)arg3;
-(char)peoplePickerSearchBarController:(id)arg1 shouldShowPersonFromSearch:(id)arg2;
-(void)peoplePickerSearchBarControllerWillBeginSearch:(id)arg1;
-(void)peoplePickerSearchBarControllerWillEndSearch:(id)arg1;
-(void)peoplePickerSearchBarControllerDidChangePickedContacts:(id)arg1;
-(id)peoplePickerSearchBarControllerStringForSearchBarPlaceholderText:(id)arg1;

@end

